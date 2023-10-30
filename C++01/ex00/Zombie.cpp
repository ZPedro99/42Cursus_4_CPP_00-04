/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:40:10 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/26 14:43:30 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name) : name(zombie_name)
{
}

Zombie::~Zombie()
{
	std::cout << name << " has died." << std::endl;
}

void	Zombie::announce()
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}