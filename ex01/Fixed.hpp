/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:51:15 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/03 14:13:38 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &copy);
		Fixed(float f);
		Fixed(int i);

		Fixed	&operator=(const Fixed &copy);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits (void) const;
		void	setRawBits (int const raw);

	private:
		int					_width;
		static const int	_binary_point;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
