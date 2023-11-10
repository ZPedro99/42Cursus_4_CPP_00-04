/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:30 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/10 11:47:52 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("BOT")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name <<" constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	/* std::cout << "FragTrap's hit points on initialization are: " << _hitPoints << std::endl;
	std::cout << "FragTrap's energy points on initialization are: " << _energyPoints << std::endl;
	std::cout << "FragTrap's attack damage on initialization is: " << _attackDamage << std::endl; */
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	if(this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name <<" destructor called." << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << _name << " says: High five, guys!" << std::endl;
}