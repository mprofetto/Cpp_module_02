/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:51:15 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/04 13:30:40 by mprofett         ###   ########.fr       */
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
		Fixed(const Fixed &copy);
		Fixed(const float f);
		Fixed(const int i);

		Fixed	&operator=(const Fixed &copy);
		Fixed	operator+(const Fixed &to_add) const;
		Fixed	operator-(const Fixed &to_retrieve) const;
		Fixed	operator*(const Fixed &to_multiply_by) const;
		Fixed	operator/(const Fixed &to_divide_by) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		bool	operator<(const Fixed &number) const;
		bool	operator>(const Fixed &number) const;
		bool	operator<=(const Fixed &number) const;
		bool	operator>=(const Fixed &number) const;
		bool	operator==(const Fixed &number) const;
		bool	operator!=(const Fixed &number) const;

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits (void) const;
		void	setRawBits (int const raw);

		static const Fixed	&min(const Fixed &var1, const Fixed &var2);
		static Fixed		&min(Fixed &var1, Fixed &var2);
		static const Fixed	&max(const Fixed &var1, const Fixed &var2);
		static Fixed		&max(Fixed &var1, Fixed &var2);

	private:
		int					_width;
		static const int	_binary_point;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
