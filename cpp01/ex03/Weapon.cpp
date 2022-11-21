/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:20:14 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/21 11:21:22 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor & Destructor

Weapon::Weapon(std::string type)
{
	this->_type = type;
}
/*
Weapon::Weapon(void)
{
}	
*/
Weapon::~Weapon(void)
{
	
}

// Methods + getter + setter

void	Weapon::setType(std::string type)
{
	this->_type = type;	
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}
