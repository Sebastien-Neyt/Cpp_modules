/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:32:21 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/21 12:56:58 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	public:
		// Constructor & Destructor
		HumanB(std::string name);
		~HumanB(void);
	
		// Methods
		void	attack(void);
		void	setWeapon(Weapon& weapon);
	private:
		// Attributes
		std::string _name;
		Weapon *_weapon;
		bool	_is_armed;

};
