/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:41:39 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/06 12:28:44 by jomirand         ###   ########.fr       */
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
	_fpValue = obj._fpValue;
}

Fixed::Fixed(const int num) : _fpValue(num << _numbFracBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _fpValue(roundf(num * (1 << _numbFracBits)))
{
	std::cout << "Float constructor called" << std::endl;
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
	return _fpValue;
}

void	Fixed::setRawBits( int const raw )
{
	_fpValue = raw;
}

int	Fixed::toInt(void) const
{
	return (_fpValue >> _numbFracBits);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fpValue) / (1 << _numbFracBits));
}