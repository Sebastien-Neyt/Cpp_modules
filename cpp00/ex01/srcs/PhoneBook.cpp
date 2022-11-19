/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:27:30 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/19 13:14:48 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

// Constructor & Destructor
PhoneBook::PhoneBook(void)
{
	//std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook destructor called" << std::endl;
}

// -h for the executable
void	PhoneBook::info(void)
{
	std::cout << std::endl;
	std::cout << MAGENTA" ____  _                      _                 _    " << std::endl; 
	std::cout << "|  _ \\| |__   ___  _ __   ___| |__   ___   ___ | | __" << std::endl; 
	std::cout << "| |_) | '_ \\ / _ \\| '_ \\ / _ \\ '_ \\ / _ \\ / _ \\| |/ /" << std::endl; 
	std::cout << "|  __/| | | | (_) | | | |  __/ |_) | (_) | (_) |   < " << std::endl; 
	std::cout << "|_|   |_| |_|\\___/|_| |_|\\___|_.__/ \\___/ \\___/|_|\\_\\" << std::endl;
   	std::cout << std::endl;
	std::cout << "------------------------USAGE------------------------"DEFAULT << std::endl;
	std::cout << "ADD\t : Add a contact to your contactlist" << std::endl;
	std::cout << std::endl;
	std::cout << "SEARCH\t : Look for a contact in your contactlist" << std::endl;
	std::cout << std::endl;
	std::cout << "EXIT\t : Exit PhoneBook executable" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int	i = 0;
	this->_contactList[i % 8].initialize();
	this->_contactList[i % 8].setIndex(i);
	i++;	
}

void	PhoneBook::displayPhoneBook(void)
{
	std::cout << MAGENTA"---------------- CONTACT LIST ----------------"DEFAULT << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contactList[i].printContact(i);
	std::cout << std::endl;
}

void	PhoneBook::searchContact(void)
{
	int	i;
	i = this->_fetchInput();
	this->_contactList[i].findContact(i);
}

int	PhoneBook::_fetchInput(void)
{
	bool	valid_input = false;
	int		index = 0;

	while (!valid_input)
	{
		std::cout << "Enter contacts index: " << std::flush;
		std::cin >> index;
		if (index <= 8 && index >= 0 && std::cin.good())
			valid_input = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index... Try again" << std::endl;
		}
	}
	return (index);
}
