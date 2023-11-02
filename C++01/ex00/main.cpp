/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:36:43 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/02 12:21:17 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if(ac == 1)
	{
		std::string	zombie_name;
		std::string	chump_name;

		std::cout << "Please give the zombie a name: ";
		std::cin >> zombie_name;
		if(zombie_name.empty())
		{
			std::cout << std::endl;
			std::cout << "Invalid name for the zombie." << std::endl;
			return(1);
		}
		std::cout << "Please give the chump a name: ";
		std::cin >> chump_name;
		if(chump_name.empty())
		{
			std::cout << std::endl;
			std::cout << "Invalid name for the chump." << std::endl;
			return(1);
		}
		Zombie *zombie;
		zombie = newZombie(zombie_name);
		zombie->announce();
		randomChump(chump_name);
		delete zombie;
	}
	else
		std::cout << "Invalid number of arguments." << std::endl;
	return(0);
}