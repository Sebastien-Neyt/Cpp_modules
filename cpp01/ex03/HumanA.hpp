/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:28:53 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/21 12:53:31 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public:
		// Constructor & Destructor
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		
		// Methods
		void	attack(void);

	private:
		// Attributes
		std::string _name;
		Weapon& _weapon;
};
