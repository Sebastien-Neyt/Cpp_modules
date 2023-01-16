/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:46:43 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/22 09:31:02 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	 std::cout << "[ INFO ]\n I cannot believe adding extra bascon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\n This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	t_function arr[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string lvls[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	i = 0;
	while (i < 4 && lvls[i].compare(level))
		i++;
	switch(i)
	{
		case 0:
			(this->*arr[0])();
		case 1:
			(this->*arr[1])();
		case 2:
			(this->*arr[2])();
		case 3:
			(this->*arr[3])();
			break;
		default :
			std::cout << " [ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}


