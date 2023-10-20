/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:36:38 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/20 14:44:37 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::add_contact(int counter)
{
	contacts[counter].contact_info();
}

void	Phonebook::search_contact(int size, Phonebook phonebook)
{
	int	i = 0;

	std::cout << "Index     |First Name |Last Name |Nickname  |" << std::endl;
	while(i < size)
	{
		std::cout << std::setw(10) << i << "|";
		print_info(phonebook.);
		print_info();
		print_info();
		i++;
	}
}

void	Contact::contact_info()
{
	FirstName = get_info("First name: ");
	LastName = get_info("Last name: ");
	Nickname = get_info("Nickname: ");
	PhoneNumber = get_info("Phone number: ");
	DarkestSecret = get_info("Darkest secret: ");
	sleep(1);
	system("clear");
	std::cout << "Contact saved succesfuly!" << std::endl;
	sleep(2);
	system("clear");
}

std::string		Contact::get_info(std::string display)
{
	std::string input;

	while(input.empty())
	{
		std::cout << display;
		if(!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			std::cout << "Invalid input, please try again." << std::endl;
			exit(1);
		}
	}
	return (input);
}