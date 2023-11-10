/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:56 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/10 10:31:21 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\033[1;36mSCAVTRAP TESTS\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 1: creating ClapTrap and ScavTrap\033[0m" << std::endl;
	{
		ClapTrap	A("Este");
		ScavTrap	B("Aquele");
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: ScavTrap attacks ClapTrap\033[0m" << std::endl;
	{
		ClapTrap	A("Este");
		ScavTrap	B("Aquele");

		B.attack("Este");
		A.takeDamage(20);
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 3: ScavTrap enters gate keeper mode\033[0m" << std::endl;
	{
		ScavTrap	B("Aquele");

		B.guardGate();
	}
	return (0);
}