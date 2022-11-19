/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:56:01 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/19 13:20:16 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

#define MAGENTA "\001\033[1;95m\002"
#define DEFAULT "\001\033[0;39m\002"
#define YELLOW "\001\033[1;93m\002"
#define GREEN "\001\033[1;92m\002"
class PhoneBook
{
	// Private by default
	// Attributes
	Contact _contactList[8];

	// Private methods
	int	_fetchInput(void);
	
	public:
		// Constructor & destructor
		PhoneBook(void);
		~PhoneBook(void);

		// Methods
		void	info(void);
		void	addContact(void);
		void	searchContact(void);
		void	displayPhoneBook(void);
};

#endif
