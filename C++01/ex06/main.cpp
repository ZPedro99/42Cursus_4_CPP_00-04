/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:37:34 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/02 14:52:17 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cerr << "Invalid number of arguments, try again." << std::endl;
		return(1);
	}
	std::string	input = argv[1];
	Harl	harlFilter;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for(i = 0; i < 4; i++)
		if(levels[i] == argv[1])
			break;

	switch (i)
	{
	case 0:
		harlFilter.complain("DEBUG");
	case 1:
		harlFilter.complain("INFO");
	case 2:
		harlFilter.complain("WARNING");
	case 3:
		harlFilter.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}