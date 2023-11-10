/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:21:32 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/10 12:44:31 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "\033[1;36mSCAVTRAP TESTS\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 1: creating Diamond Trap\033[0m" << std::endl;
	{
		DiamondTrap	A("User1");
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: Diamond Trap reveals its ClapTrap name\033[0m" << std::endl;
	{
		DiamondTrap	A("User2");

		A.whoAmI();
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 3: Diamond Trap uses ScavTrap's attack function\033[0m" << std::endl;
	{
		DiamondTrap	A("User3");
		DiamondTrap	B("User4");

		A.attack("User4");
		B.takeDamage(30);
	}
}