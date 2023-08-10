/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:40:39 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/08 10:50:01 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	/*Subject main*/
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	/*My own tests*/
	{
		Fixed c((int)230);
		Fixed d((float)3.4);
		const Fixed e(230);
		const Fixed f((float)3.4);

		std::cout << "default constructor result: " << c << std::endl;
		std::cout << "copy constructor result: " << d << std::endl;
		std::cout << "constructor with int as parameter result: " << c << std::endl;
		std::cout << "constructor with float as parameter result: " << d << std::endl;
		std::cout << "pre-increment with int: " << ++c << std::endl;
		std::cout << "pre-increment with float: " << ++d << std::endl;
		std::cout << "post-increment with int (before): " << c++ << std::endl;
		std::cout << "post-increment with float (before): " << d++ << std::endl;
		std::cout << "post-increment with int (after): " << c << std::endl;
		std::cout << "post-increment with float (after): " << d << std::endl;
		std::cout << "pre-decrement with int: " << --c << std::endl;
		std::cout << "pre-decrement with float: " << --d << std::endl;
		std::cout << "post-decrement with int (before): " << c-- << std::endl;
		std::cout << "post-decrement with float (before): " << d-- << std::endl;
		std::cout << "post-decrement with int (after): " << c << std::endl;
		std::cout << "post-decrement with float (after): " << d << std::endl;
		std::cout << "addition: " << c + d << std::endl;
		std::cout << "substraction: " << c - d << std::endl;
		std::cout << "multiplication: " << c * d << std::endl;
		std::cout << "division: " << c / d << std::endl;
		std::cout << "c > d comparison: " << (c > d) << std::endl;
		std::cout << "c < d comparison: " << (c < d) << std::endl;
		std::cout << "c >= d comparison: " << (c >= d) << std::endl;
		std::cout << "c =< d comparison: " << (c <= d) << std::endl;
		std::cout << "c == d comparison: " << (c == d) << std::endl;
		std::cout << "c != d comparison: " << (c != d) << std::endl;
		std::cout << "c and d max: " << Fixed::max(c, d) << std::endl;
		std::cout << "c and d min: " << Fixed::min(c, d) << std::endl;
		std::cout << "const e and const f max: " << Fixed::max(e, f) << std::endl;
		std::cout << "const e and const f min: " << Fixed::min(e, f) << std::endl;
	}

	return (0);
}
