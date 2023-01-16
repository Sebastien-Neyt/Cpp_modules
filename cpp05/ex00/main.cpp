/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 08:45:56 by sneyt             #+#    #+#             */
/*   Updated: 2023/01/10 09:11:33 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *jimmy = new Bureaucrat("jimmy");
	Bureaucrat *boris = new Bureaucrat("Boris",1);
	Bureaucrat george("George");
	Bureaucrat tim = george;

	std::cout << &george;
	std::cout << &tim;
	try
	{
		boris->incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &exception)
	{
		std::cerr << "Incrementing grade of " << boris->getName() << " failed: " << exception.what() << std::endl;
	}

	std::cout << boris;

	try
	{
		boris->decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &exception)
	{
		std::cerr << "Decrementing grade of " << boris->getName() << " failed: " << exception.what() << std::endl;
	}

	try
	{
		jimmy->decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &exception)
	{
		std::cerr << "Decrementing grade of " << jimmy->getName() << " failed: " << exception.what() << std::endl;
	}

	std::cout << jimmy;

	try
	{
		jimmy->incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &exception)
	{
		std::cerr << "Incrementing grade of " << jimmy->getName() << " failed: " << exception.what() << std::endl;
	}

	std::cout << boris;
	std::cout << jimmy;

	delete boris;
	delete jimmy;
}	
