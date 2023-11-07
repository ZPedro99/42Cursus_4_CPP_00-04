/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:54:40 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/07 17:23:19 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	std::cout << "Example 1: Point inside the triangle." << std::endl;
	{
		const Point	a(0.0f, 0.0f);
		const Point	b(5.0f, 5.0f);
		const Point	c(0.0f, 10.0f);
		const Point	point(1.0f, 2.0f);

		bsp(a, b, c, point);
		std::cout << "Next example..." << std::endl;
	}
	std::cout << "Example 2: Point outside the triangle." << std::endl;
	{
		const Point	a(0, 0);
		const Point	b(5, 5);
		const Point	c(0, 10);
		const Point	point(-1, -1);

		bsp(a, b, c, point);
		std::cout << "Next example..." << std::endl;
	}
	std::cout << "Example 3: Point on one of the triangle's sides." << std::endl;
	{
		const Point	a(0, 0);
		const Point	b(5, 5);
		const Point	c(0, 10);
		const Point	point(0, 5);

		bsp(a, b, c, point);
		std::cout << "Next example..." << std::endl;
	}
	std::cout << "Example 4: Point on one of the triangle's vertex." << std::endl;
	{
		const Point	a(0, 0);
		const Point	b(5, 5);
		const Point	c(0, 10);
		const Point	point(5, 5);

		bsp(a, b, c, point);
		std::cout << "All tests done." << std::endl;
	}
	return(0);
}