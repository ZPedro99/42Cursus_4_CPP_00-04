/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:56 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/09 17:58:59 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "\033[1;36mSCAVTRAP TESTS\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 1: creating ClapTrap, ScavTrap and FragTrap\033[0m" << std::endl;
	{
		ClapTrap	A("Este");
		ScavTrap	B("Aquele");
		FragTrap	C("O outro");
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: FragTrap gives high fives\033[0m" << std::endl;
	{
		FragTrap	A("O outro");

		A.highFiveGuys();
	}
	return (0);
}