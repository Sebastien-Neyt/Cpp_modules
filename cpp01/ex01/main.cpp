/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:17:05 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/20 10:33:19 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	Zombie *horde = zombieHorde(N, "test");
	std::cout << std::endl;

	for (int i=0; i<N; i++)
		horde[i].announce();
	std::cout << std::endl;

	delete [] horde;
	return (0);
}
