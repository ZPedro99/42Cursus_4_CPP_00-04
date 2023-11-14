/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:03:35 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 12:25:38 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		//****Orthodox Canonical Form****//
		Brain();
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		~Brain();
		//******************************//

		std::string ideas[100];
};

#endif