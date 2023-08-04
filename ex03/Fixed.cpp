/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:21:37 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/04 14:46:57 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Constructors AND Destructors*/

Fixed::Fixed()
{
	this->_width = 0;
	return;
}

Fixed::Fixed(const Fixed &copy)
{
	this->_width = copy.getRawBits();
	return;
}

Fixed::Fixed(const int input)
{
	this->_width = input << Fixed::_binary_point;
}

Fixed::Fixed(const float input)
{
	this->_width = roundf(input * (1 << Fixed::_binary_point));
}

Fixed::~Fixed()
{
	return;
}



/*Utilitary functions*/

float	Fixed::toFloat(void)const
{
	return ((float)this->_width / (float)(1 << Fixed::_binary_point));
}

int		Fixed::toInt(void)const
{
	return (this->_width >> Fixed::_binary_point);
}

int		Fixed::getRawBits (void) const
{
	return this->_width;
}

void	Fixed::setRawBits (int const raw)
{
	this->_width = raw;
}



/*Operators overloads*/

Fixed	&Fixed::operator=(const Fixed &copy)
{
	this->_width = copy.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed &to_add) const
{
	Fixed	result(this->toFloat() + to_add.toFloat());

	return (result);
}

Fixed	Fixed::operator-(const Fixed &to_retrieve) const
{
	Fixed	result(this->toFloat() - to_retrieve.toFloat());

	return (result);
}

Fixed	Fixed::operator*(const Fixed &to_multiply_by) const
{
	Fixed	result(this->toFloat() * to_multiply_by.toFloat());

	return (result);
}

Fixed	Fixed::operator/(const Fixed &to_divide_by) const
{
	Fixed	result(this->toFloat() * to_divide_by.toFloat());

	return (result);
}

Fixed	&Fixed::operator++(void)
{
	++this->_width;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	--this->_width;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old(*this);

	--(*this);
	return (old);
}

bool	Fixed::operator<(const Fixed &number) const
{
	if (this->toFloat() < number.toFloat())
		return (0);
	return (1);
}

bool	Fixed::operator>(const Fixed &number) const
{
	if (this->toFloat() > number.toFloat())
		return (0);
	return (1);
}

bool	Fixed::operator<=(const Fixed &number) const
{
	if (this->toFloat() <= number.toFloat())
		return (0);
	return (1);
}

bool	Fixed::operator>=(const Fixed &number) const
{
	if (this->toFloat() >= number.toFloat())
		return (0);
	return (1);
}

bool	Fixed::operator==(const Fixed &number) const
{
	if (this->toFloat() == number.toFloat())
		return (0);
	return (1);
}

bool	Fixed::operator!=(const Fixed &number) const
{
	if (this->toFloat() != number.toFloat())
		return (0);
	return (1);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}


/*Static functions*/

const Fixed	&Fixed::min(const Fixed &var1, const Fixed &var2)
{
	if (var1.toFloat() < var2.toFloat())
		return (var1);
	return (var2);
}

Fixed	&Fixed::min(Fixed &var1, Fixed &var2)
{
	if (var1.toFloat() < var2.toFloat())
		return (var1);
	return (var2);
}

const Fixed	&Fixed::max(const Fixed &var1, const Fixed &var2)
{
	if (var1.toFloat() > var2.toFloat())
		return (var1);
	return (var2);
}

Fixed	&Fixed::max(Fixed &var1, Fixed &var2)
{
	if (var1.toFloat() > var2.toFloat())
		return (var1);
	return (var2);
}

/*Static variable initialization*/

const int	Fixed::_binary_point = 8;
