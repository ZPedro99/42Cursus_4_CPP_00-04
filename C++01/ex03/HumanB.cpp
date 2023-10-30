/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:07:00 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/30 17:28:36 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

HumanB::HumanB() {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	std::cout << this->name << "attacks with their" << this->weapon << std::endl;
}