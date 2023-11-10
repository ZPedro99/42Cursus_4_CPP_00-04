/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:34:25 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/10 10:31:12 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("BOT")
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name <<" constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &obj)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name <<" destructor called." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

void		ScavTrap::attack(const std::string& target)
{
	if(_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << "can't attack, because he is dead." << std::endl;
		return ;
	}
	else if(_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << "doesn't have enough Energy Points to attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}
