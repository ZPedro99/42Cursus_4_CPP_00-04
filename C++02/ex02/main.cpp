/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:05:10 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/06 17:00:15 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	comparison_operators()
{
	Fixed	a(5);
	Fixed	b(3.5f);

	std::cout << std::endl;
	std::cout << "COMPARISON OPERATORS TESTS" << std::endl;
	std::cout << std::endl;

	std::cout << "value of a: " << a << std::endl;
	std::cout << "value of b: " << b << std::endl;

	if(a > b)
		std::cout << "a is higher than b" << std::endl;
	if(a < b)
		std::cout << "a is lower than b" << std::endl;
	if(a >= b)
		std::cout << "a is higher or equal than b" << std::endl;
	if(a <= b)
		std::cout << "a is lower or equal than b" << std::endl;
	if(a == b)
		std::cout << "a is equal to b" << std::endl;
	if(a != b)
		std::cout << "a is different than b" << std::endl;
}

void	arithmetic_operators()
{

	std::cout << std::endl;
	std::cout << "ARITHMETIC OPERATORS TESTS" << std::endl;
	std::cout << std::endl;

	Fixed	a(5);
	Fixed	b(2.5f);
	Fixed	c = a + b;
	Fixed	d = a - b;
	Fixed	e = a * b;
	Fixed	f = a / b;

	std::cout << "value of a: " << a << std::endl;
	std::cout << "value of b: " << b << std::endl;

	std::cout << "a + b = " << c << std::endl;
	std::cout << "a - b = " << d << std::endl;
	std::cout << "a * b = " << e << std::endl;
	std::cout << "a / b = " << f << std::endl;
}

void	increment_decrement()
{

	std::cout << std::endl;
	std::cout << "INCREMENT AND DECREMENT OPERATORS TESTS" << std::endl;
	std::cout << std::endl;

	Fixed	a(5);
	Fixed	b(2.5f);

	std::cout << "value of a before post increment is " << a << std::endl;
	std::cout << "value of b before post increment is " << b << std::endl;

	a++;
	b++;

	std::cout << "value of a after post increment is " << a << std::endl;
	std::cout << "value of b after post increment is " << b << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	Fixed	c(5);
	Fixed	d(2.5f);

	std::cout << "value of c before pre increment is " << c << std::endl;
	std::cout << "value of d before pre increment is " << d << std::endl;

	++c;
	++d;

	std::cout << "value of c after pre increment is " << c << std::endl;
	std::cout << "value of d after pre increment is " << d << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	Fixed	e(5);
	Fixed	f(2.5f);

	std::cout << "value of e before post increment is " << e << std::endl;
	std::cout << "value of f before post increment is " << f << std::endl;

	e--;
	f--;

	std::cout << "value of e after post increment is " << e << std::endl;
	std::cout << "value of f after post increment is " << f << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	Fixed	g(5);
	Fixed	h(2.5f);

	std::cout << "value of g before post increment is " << g << std::endl;
	std::cout << "value of h before post increment is " << h << std::endl;

	--g;
	--h;

	std::cout << "value of g after post increment is " << g << std::endl;
	std::cout << "value of h after post increment is " << h << std::endl;
}

void	max_and_min()
{
	std::cout << std::endl;
	std::cout << "MAX AND MIN TESTS" << std::endl;
	std::cout << std::endl;

	Fixed	a(5);
	Fixed	b(2.5f);

	std::cout << "The max value between a and b is "<<Fixed::max(a, b) << std::endl;
	std::cout << "The min value between a and b is "<<Fixed::min(a, b) << std::endl;

	Fixed	c(42);
	Fixed	d(7.3f);

	std::cout << "The max value between c and d is "<<Fixed::max(c, d) << std::endl;
	std::cout << "The min value between c and d is "<<Fixed::min(c, d) << std::endl;
}

int	main(void)
{
	comparison_operators();
	arithmetic_operators();
	increment_decrement();
	max_and_min();

	/* Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return(0); */
}