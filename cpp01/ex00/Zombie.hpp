/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:49:55 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/19 16:20:52 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
