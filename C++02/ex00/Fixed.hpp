/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:47:57 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/03 15:42:15 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fpValue;
	static const int	_numbFracBits = 8;

public:
	Fixed();
	Fixed( const Fixed &obj );
	Fixed& operator=( const Fixed &obj );
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif