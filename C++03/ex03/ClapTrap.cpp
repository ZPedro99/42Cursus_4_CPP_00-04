/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:07:12 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/10 12:52:07 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("BOT"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap \"BOT\" initialized." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << name << " initialized." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) : _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints) , _attackDamage(obj._attackDamage)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &obj)
{
	if(this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
	}
	return(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if(_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "can't attack, because he is dead." << std::endl;
		return ;
	}
	else if(_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "doesn't have enough Energy Points to attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
	/* std::cout << "Energy Points left: " << _energyPoints << std::endl; */
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has taken ";
		std::cout << amount << " points of damage." << std::endl;
	}
	if(amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " has died." << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "Hit Points left: " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself because he's dead.";
		std::cout << std::endl;
		return ;
	}
	if(_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "can't repair itself. ";
		std::cout << "He has no Energy Points available." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " has repaired itself by ";
	std::cout << amount << " Hit Points." << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
	/* std::cout << "Energy Points left: " << _energyPoints << std::endl;
	std::cout << "Hit Points left: " << _hitPoints << std::endl; */
}