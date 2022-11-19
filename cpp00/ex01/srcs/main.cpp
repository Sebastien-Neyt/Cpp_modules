/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:57:31 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/19 13:19:44 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string input;

	phonebook.info();
	while (input.compare("EXIT"))
	{
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
		{
			phonebook.displayPhoneBook();
			phonebook.searchContact();
		}
		std::cout << GREEN"Instruction > "DEFAULT << std::flush;
		std::cin >> input;
	}
	return (0);
}
