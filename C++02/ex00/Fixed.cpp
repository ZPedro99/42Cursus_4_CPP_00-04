/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:47:59 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/03 15:12:22 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj )
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(obj.getRawBits());
}


Fixed& Fixed::operator=( const Fixed &obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &obj)
		this->_fpValue = obj.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpValue;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpValue = raw;
}