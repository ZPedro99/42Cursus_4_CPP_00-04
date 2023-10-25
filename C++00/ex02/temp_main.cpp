/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:29:51 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/25 14:55:14 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

void	timestamp(void)
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
	std::cout << "]" << std::endl;
}

void	index(void)
{
	
}

int	main(void)
{
	timestamp();
	index()
}