/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:40:39 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/04 15:59:31 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	a(0, 0);
	Point	b(5, 5);
	Point	c(10, 0);
	Point	p(5, 5);

	if (bsp(a, b, c, p) == true)
		std::cout << "p is in the triangle" << std::endl;
	else
		std::cout << "p is not in the triangle" << std::endl;
	return (0);
}
