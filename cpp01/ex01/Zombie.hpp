/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:12:32 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/20 10:30:49 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		// Constructor & destructor
		Zombie();
		~Zombie(void);

		//methods
		void	announce(void);
		//setter
		void	setName(std::string name);		

	private:
		std::string _name;
};


Zombie *zombieHorde(int N, std::string name);
