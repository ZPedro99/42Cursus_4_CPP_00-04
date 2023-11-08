/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:56 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/08 15:13:13 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\033[1;36mCLAPTRAP TESTS\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 1: creating ClapTraps\033[0m" << std::endl;
	{
		ClapTrap	A("Roberto");
		ClapTrap	B("Antunes");
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: ClapTrap A attacks ClapTrap B\033[0m" << std::endl;
	{
		ClapTrap	A("Roberto");
		ClapTrap	B("Antunes");

		A.attack("Antunes");
		B.takeDamage(0);
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 3: ClapTrap B repairs itself by 5 HP\033[0m" << std::endl;
	{
		ClapTrap	A("Roberto");
		ClapTrap	B("Antunes");

		B.beRepaired(5);
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 4: ClapTrap B kills ClapTrap A\033[0m" << std::endl;
	{
		ClapTrap	A("Roberto");
		ClapTrap	B("Antunes");

		A.takeDamage(10);
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 5: ClapTrap B dies too\033[0m" << std::endl;
	{
		ClapTrap	A("Roberto");
		ClapTrap	B("Antunes");

		B.takeDamage(666);
	}
	return (0);
}