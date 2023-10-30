/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:30:40 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/30 16:57:09 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	(void)argv;
	if(argc != 1)
	{
		std::cout << "Run the program without variables." << std::endl;
		return(1);
	}
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the str variable is " << &str << "." << std::endl;
	std::cout << "The memory address held by stringPTR is " << stringPTR << "." << std::endl;
	std::cout << "The memory address held by stringREF is " << &stringREF << "." << std::endl;

	std::cout << std::endl;

	std::cout << "The value of str variable is " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;

	return(0);
}