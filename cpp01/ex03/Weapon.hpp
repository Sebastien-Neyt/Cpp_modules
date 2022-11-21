/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:15:51 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/21 11:21:28 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
		// Constructor & Destructor
		Weapon(std::string type);
		//Weapon(void);
		~Weapon(void);

		// Methods + setter/getter
		const std::string&	getType();
		void				setType(std::string type);


	private:
		std::string _type;
};

#endif

