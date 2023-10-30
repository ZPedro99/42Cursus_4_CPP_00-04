/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:06:58 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/30 17:27:56 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

HumanA::HumanA() {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->weapon << std::endl;
}