/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:36:38 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/25 11:14:02 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::add_contact(int counter)
{
	contacts[counter].contact_info();
}

void	Phonebook::display_contacts(int size)
{
	int	i = 0;

	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	while(i < size)
	{
		std::cout << std::setw(10) << i << "|";
		print_contact(contacts[i].getFirstName());
		print_contact(contacts[i].getLastName());
		print_contact(contacts[i].getNickname());
		std::cout << std::endl;
		i++;
	}
}

void	Phonebook::print_contact(std::string info)
{

	if (info.size() > 10)
	{
		info.resize(9);
		info.append(".");
	}
	std::cout << std::setw(10) << info << "|";
}

void	Phonebook::search_contact(int size)
{
	std::string input;
	int	i = 0;

	while(input[i] != '\0')
	{
		std::cout << std::endl;
		std::cout << "Insert valid index to see full info or \"EXIT\" to go back -> ";
		if(!std::getline(std::cin, input))
			break ;
		if(input == "EXIT")
		{
			system("clear");
			break;
		}
		i = atoi(input.c_str());
		if(check_if_digit(input))
		{
			std::cout << "Invalid option, please insert a valid one." << std::endl;
			continue ;
		}
		else if(i < 0 || i > size)
		{
			std::cout << "Invalid index, please insert a valid index." << std::endl;
			continue ;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
			std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
			std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
			std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
			std::cout << std::endl;
		}
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

int	check_if_digit(std::string input)
{
	for(size_t i = 0; i < input.size(); i++)
	{
		if(!isdigit(input[i]))
		{
			return (1);
		}
	}
	return (0);
}
