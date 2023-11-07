/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:07:53 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/06 15:56:06 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpValue(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj )
{
	//std::cout << "Copy constructor called" << std::endl;
	_fpValue = obj._fpValue;
}

Fixed::Fixed(const int num) : _fpValue(num << _numbFracBits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _fpValue(roundf(num * (1 << _numbFracBits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
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

Fixed&	Fixed::operator=(const Fixed &obj)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if(this != &obj)
		this->_fpValue = obj.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &obj) const
{
	if(this->toFloat() > obj.toFloat())
		return(true);
	return(false);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	if(this->toFloat() < obj.toFloat())
		return(true);
	return(false);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	if(this->toFloat() >= obj.toFloat())
		return(true);
	return(false);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	if(this->toFloat() <= obj.toFloat())
		return(true);
	return(false);
}

bool	Fixed::operator==(const Fixed &obj) const
{
	if(this->toFloat() == obj.toFloat())
		return(true);
	return(false);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	if(this->toFloat() != obj.toFloat())
		return(true);
	return(false);
}

Fixed	Fixed::operator+(const Fixed &obj) const
{
	return(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed &obj) const
{
	return(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	return(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	return(this->toFloat() / obj.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	_fpValue++;
	return(temp);
}

Fixed&	Fixed::operator++()
{
	++_fpValue;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	_fpValue--;
	return(temp);
}

Fixed&	Fixed::operator--()
{
	--_fpValue;
	return(*this);
}

Fixed&	Fixed::min(Fixed& one, Fixed& two)
{
	if(one.toFloat() < two.toFloat())
		return(one);
	return(two);
}

const Fixed&	Fixed::min(const Fixed& one, const Fixed& two)
{
	if(one.toFloat() < two.toFloat())
		return(one);
	return(two);
}

Fixed&	Fixed::max(Fixed& one, Fixed& two)
{
	if(one.toFloat() > two.toFloat())
		return(one);
	return(two);
}

const Fixed&	Fixed::max(const Fixed& one, const Fixed& two)
{
	if(one.toFloat() > two.toFloat())
		return(one);
	return(two);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &copy)
{
	output << copy.toFloat();
	return (output);
}
