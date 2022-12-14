/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:55:09 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/20 10:07:04 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Building a zombie on the stack" << std::endl;
	Zombie test1("test1");
	test1.announce();
	std::cout << std::endl;

	std::cout << "building a zombie on the heap"<< std::endl;
	Zombie *test2 = newZombie("test2");
	test2->announce();
	std::cout << std::endl;

	std::cout << "building a zombie with randomChump()" << std::endl;
	randomChump("test3");
	std::cout << std::endl;

	delete(test2);
	return (0);
}
