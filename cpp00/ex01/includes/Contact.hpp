/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:58:43 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/19 13:16:41 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

#define MAGENTA "\001\033[1;95m\002"
#define DEFAULT "\001\033[0;39m\002"
#define YELLOW "\001\033[1;93m\002"

class Contact
{
	// Private by default
	// Attributes
	int			_index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

	// Private methods
	std::string _fetchInput(std::string prompt);
	std::string _printFormat(std::string str);

	public:
		// Constructor & destructor
		Contact(void);
		~Contact(void);

		// Methods
		void	initialize(void);
		void	setIndex(int i);
		void	printContact(int i);
		void	findContact(int i);
};

#endif
