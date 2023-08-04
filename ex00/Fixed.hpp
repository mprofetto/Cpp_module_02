/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:51:15 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/01 14:19:35 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &copy);

		Fixed	&operator=(const Fixed &copy);

		int		getRawBits (void) const;
		void	setRawBits (int const raw);

	private:
		int					_width;
		static const int	_binary_point;
};

#endif
