/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:40:39 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/03 14:06:13 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{

	Fixed	a((float)25.75);
	Fixed	b(25);

	std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
	return 0;
}
