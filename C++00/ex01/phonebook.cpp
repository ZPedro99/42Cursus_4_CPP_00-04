/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:47:27 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/20 14:43:57 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string Contact::getFirstName()
{
	return(FirstName);
}

std::string Contact::getLastName()
{
	return(LastName);
}

std::string Contact::getNickname()
{
	return(Nickname);
}

std::string Contact::getPhoneNumber()
{
	return(PhoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return(DarkestSecret);
}

int	main(int argc, char **argv)
{
	(void)argv;
	std::string input;
	Phonebook phonebook;

	if(argc == 1)
	{
		system("clear");
		while(1)
		{
			first_display();
			if(!std::getline(std::cin, input))
			{
				std::cout << input;
				std::cout << std::endl;
				std::cout << "No option was selected, please choose a valid one." << std::endl;
				exit(1) ;
			}
			if(!check_option(input, phonebook))
				exit(1);
		}
	}
	else
	{
		std::cout << "Incorrect form of execution." << std::endl;
		exit(1);
	}
	return (0);
}

int	check_option(std::string input, Phonebook phonebook)
{
	int	contact_counter = 0;
	int	list_size = 0;

	if(input == "ADD")
	{
		contact_counter++;
		if(contact_counter == 8)
			contact_counter = 0;
		system("clear");
		std::cout << "You entered the \"ADD\" option." << std::endl;
		std::cout << "Please fill the next fields correctly." << std::endl;
		phonebook.add_contact(contact_counter);
		if(list_size < 8)
			list_size++;
		return(1);
	}
	if(input == "SEARCH")
	{
		std::cout << "You entered the \"SEARCH\" option." << std::endl;
		phonebook.search_contact(list_size, phonebook);
		return(1);
	}
	if(input == "EXIT")
	{
		std::cout << "You entered the \"EXIT\" option." << std::endl;
		std::cout << "Closing Phonebook..." << std::endl;
		return(0);
	}
	else
	{
		system("clear");
		std::cout << "Invalid option, please try again." << std::endl;
		return(1);
	}
	return(0);
}

void	first_display(void)
{
	std::cout << "Please choose an option between ADD, SEARCH and EXIT" << std::endl;
	std::cout << std::endl;
	std::cout << "Insert here -> ";
}

void	Phonebook::search_keyword(std::string keyword)
{
	
}