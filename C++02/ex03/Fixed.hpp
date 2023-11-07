/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:05:42 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/06 15:48:19 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_fpValue;
		static const int	_numbFracBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

		Fixed&	operator=(const Fixed &obj);
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;
		Fixed	operator+(const Fixed &obj) const;
		Fixed	operator-(const Fixed &obj) const;
		Fixed	operator*(const Fixed &obj) const;
		Fixed	operator/(const Fixed &obj) const;
		Fixed	operator++(int);
		Fixed&	operator++();
		Fixed	operator--(int);
		Fixed&	operator--();

		static Fixed&			min(Fixed& one, Fixed& two);
		static const Fixed&		min(const Fixed& one, const Fixed& two);
		static Fixed&			max(Fixed& one, Fixed& two);
		static const Fixed&		max(const Fixed& one, const Fixed& two);

};

/*those operators who only have an (int) as the argument passed are the post ones*/

std::ostream	&operator<<(std::ostream &output, const Fixed &copy);

#endif