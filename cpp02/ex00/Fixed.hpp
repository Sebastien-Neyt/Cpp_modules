/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:40:30 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/24 13:43:59 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	public:
		// Constructor & Destructor
		Fixed(void);
		~Fixed(void);
		// Copy constructor
		Fixed(const Fixed& copy);
		// Copy assignment overload ?
		Fixed& operator=(const Fixed& other);
		// Getter & setter
		int		getRawBits(void) const; // The const after the method name means that this method is not going to modify attributes of the class.
		void	setRawBits(int const raw);

	private:
		int	_value;
		static const int _bits = 8;
};
