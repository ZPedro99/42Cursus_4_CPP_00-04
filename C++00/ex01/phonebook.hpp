/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:47:46 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/20 14:45:02 by jomirand         ###   ########.fr       */
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

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		void		add_contact(int counter);
		void		search_contact(int size, Phonebook phonebook);
		void		print_info(std::string keyword);
		std::string	Phonebook::search_keyword(std::string keyword);
};

//*********phonebook.cpp*********

int		check_option(std::string input, Phonebook phonebook);
void	first_display(void);

#endif