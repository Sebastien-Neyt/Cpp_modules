/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:29:15 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/21 13:06:16 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
// Constructor & Destructor

HumanA::HumanA(std::string name, Weapon& weapon):_weapon(weapon)
{
		this->_name = name;
		std::cout << this->_name << " has been born!" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " has died!" << std::endl;	
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " has attacked with his " << this->_weapon.getType() << std::endl;
}


