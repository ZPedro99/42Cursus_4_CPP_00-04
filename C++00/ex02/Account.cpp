/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:29:06 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/25 16:02:49 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::getNbAccounts();
	std::cout << "index:" << this->_nbAccounts << ";";
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	std::cout << "amount:" << this->_totalAmount << ";";
	std::cout << "created" << std::endl;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

void	Account::_displayTimestamp(void)
{
	std::tm		*time_info;
	std::time_t	current_time;

	std::time(&current_time);
	time_info = std::localtime(&current_time);

	std::cout << "[";
	std::cout << std::setw(2) << std::setfill('0') << time_info->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << time_info->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << time_info->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << time_info->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << time_info->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << time_info->tm_sec;
	std::cout << "] " << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount" << this->_amount - deposit << ";";
	std::cout << "deposit" << deposit << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts << ";";

}

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}
