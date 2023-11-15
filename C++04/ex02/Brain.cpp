/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:02:14 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 11:58:41 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
	for(int i = 0; i < 100; i++)
			ideas[i] = "";
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called." << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
}

Brain&	Brain::operator=(const Brain& obj)
{
	if(this != &obj)
	{
		for(int i = 0; i < 100; i++)
			ideas[i] = obj.ideas[i];
	}
	return(*this);
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called." << std::endl;
}