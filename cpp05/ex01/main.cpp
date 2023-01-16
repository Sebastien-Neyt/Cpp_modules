/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 08:45:56 by sneyt             #+#    #+#             */
/*   Updated: 2023/01/10 11:05:57 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	Bureaucrat *boris = new Bureaucrat("Boris",1);
	Form *a = new Form();

	std::cout << boris;
	std::cout << a;
	
	a->beSigned(*boris);
	std::cout << a;


	delete boris;
	delete a;
	std::cout << "-------------------------------------" <<std::endl;
//////////////////////////////////////////////
	Bureaucrat *tim = new Bureaucrat("Tim", 25);
	Bureaucrat *henry = new Bureaucrat("Henry", 1);
	Form *b = new Form(10, 1);
	
	std::cout << tim;
	std::cout << henry;
	std::cout << b;
	try
	{
		b->beSigned(*tim);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << tim->getName() << " was not able to sign " << b->getName() << ": " << e.what() << std::endl;
	}

	try
	{
		b->beSigned(*henry);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << henry->getName() << " was not able to sign " << b->getName() << ": " << e.what() << std::endl;
	}


	std::cout << tim;
	std::cout << b;

	delete tim;
	delete henry;
	delete b;
}	
