/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:49:55 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/20 10:14:38 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public: 

		// Constructor & destructor
		Zombie(std::string name);
		~Zombie(void);
		
		// Public methods
		void	announce(void);
		void	randomChump(std::string name);
		Zombie* newZombie(std::string name);
		
	private:
		std::string _name;

};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
