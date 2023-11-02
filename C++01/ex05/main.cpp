/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:29:38 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/02 10:48:47 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	if(argc != 2)
	{
		std::cerr << "Invalid number of arguments, please try again." << std::endl;
		return(1);
	}
	std::string	input = argv[1];
	harl.complain(input);
	return (0);
}