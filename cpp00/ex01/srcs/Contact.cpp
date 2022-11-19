/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:33:20 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/19 13:18:10 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../includes/Contact.hpp"

// Constructor & Destructor

Contact::Contact(void)
{
	//std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destructor called" << std::endl;
}

// initializing contact

void	Contact::initialize(void)
{
	std::cin.ignore();
	this->_firstName = this->_fetchInput("Enter contacts FIRST NAME >>> ");
	this->_lastName = this->_fetchInput("Enter contacts LAST NAME >>> ");
	this->_nickname = this->_fetchInput("Enter contacts NICKNAME >>> ");
	this->_phoneNumber = this->_fetchInput("Enter contacts PHONENUMBER >>> ");
	this->_darkestSecret = this->_fetchInput("Enter contacts DARKESTSECRET >>> ");
	std::cout << std::endl;
}

void	Contact::setIndex(int i)
{
	this->_index = i;
}

void	Contact::printContact(int i)
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << i << std::flush;
	std::cout << "|" << std::setw(10) << _printFormat(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << _printFormat(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << _printFormat(this->_nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::findContact(int i)
{
		if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
			return ;
		std::cout << std::endl;
		std::cout << YELLOW"CONTACT # "DEFAULT <<  i << std::endl;
		std::cout << YELLOW"First Name: "DEFAULT << this->_firstName << std::endl;
		std::cout << YELLOW"Last Name: "DEFAULT << this->_lastName << std::endl;
		std::cout << YELLOW"Nickname: "DEFAULT << this->_nickname << std::endl;
		std::cout << YELLOW"Phonenumber: "DEFAULT << this->_phoneNumber << std::endl;
		std::cout << YELLOW"Darkestsecret: "DEFAULT << this->_darkestSecret << std::endl;
}

std::string Contact::_printFormat(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}


std::string	Contact::_fetchInput(std::string prompt)
{
	bool		valid_input = false;
	std::string	input;

	while (!valid_input)
	{
		std::cout << prompt << std::flush;
		std::getline(std::cin, input);
		if (!input.empty() && std::cin.good())
			valid_input = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input, try again ..." << std::endl;
		}
	}
	return (input);
}
