/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:36:59 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/21 13:06:23 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor & Destructor
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_is_armed = false;
	std::cout << this->_name << " has been born!" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " has died!" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	this->_is_armed = true;
}

void	HumanB::attack(void)
{
	if (this->_is_armed == true)
		std::cout << this->_name << " has attacked with his " << this->_weapon->getType() << std::endl;
}
