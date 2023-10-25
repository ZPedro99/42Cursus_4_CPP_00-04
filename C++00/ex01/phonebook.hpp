/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:47:46 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/23 18:03:15 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cctype>
# include <string.h>
# include "contact.hpp"
# include <unistd.h>
# include <iomanip>
# include <cstdlib>

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		Phonebook();
		~Phonebook();
		void	add_contact(int counter);
		void	search_contact(int size, Phonebook phonebook);
		void	print_info(std::string keyword);
		void	search_contact(int size);
		void	display_contacts(int size);
		void	print_contact(std::string info);
};

//*********phonebook.cpp*********

void	first_display(void);

//*********option.cpp*********

int	check_if_digit(std::string input);

#endif