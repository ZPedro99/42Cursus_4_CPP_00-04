/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:22:02 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/10 12:34:39 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("BOT_clap_name"), _name("BOT")
{
	std::cout << "DiamondTrap " << _name << " default constructor called." << std::endl;

	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = 50;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap " << _name << " name constructor called." << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = 50;
	_attackDamage = FragTrap::_attackDamage;

}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj)
{
	std::cout << "DiamondTrap " << _name << " copy constructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
	if(this != &obj)
		_name = obj._name;
	return(*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destructor called." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << _name << "'s ClapTrap name is: " << ClapTrap::_name << std::endl;
}