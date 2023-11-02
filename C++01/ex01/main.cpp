/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:01:59 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/02 12:23:21 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	checkIfDigit(std::string input)
{
	for(size_t	i = 0, s = input.size(); i < s; i++)
	{
		if(!isdigit(input[i]))
			return(1);
	}
	return(0);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if(argc != 1)
	{
		std::cout << "Please run the program without any arguments" << std::endl;
		exit(1);
	}
	std::string	input;
	std::string	zombiesName;
	int			numberOfZombies;
	Zombie		*horde;

	std::cout << "How many zombies do you wish to create? ";
	std::getline(std::cin, input);
	if(checkIfDigit(input) || atoi(input.c_str()) < 1 || input.empty())
	{
		std::cout << std::endl;
		std::cout << "Please write a valid option." << std::endl;
		exit(1);
	}
	numberOfZombies = atoi(input.c_str());
	std::cout << "Please choose their name: ";
	getline(std::cin, input);
	if(input.empty())
	{
		std::cout << std::endl;
		std::cout << "Invalid name for the zombies." << std::endl;
		return(1);
	}
	zombiesName = input;
	horde = zombieHorde(numberOfZombies, zombiesName);
	for (int i = 0; i < numberOfZombies; i++)
		horde[i].announce();
	delete [] horde;
	return(0);
}