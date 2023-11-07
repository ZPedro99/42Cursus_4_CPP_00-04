/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:41:20 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/06 12:29:23 by jomirand         ###   ########.fr       */
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

		Fixed& operator=(const Fixed &obj);

};

std::ostream	&operator<<(std::ostream &output, const Fixed &copy);

#endif