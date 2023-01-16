/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 08:43:00 by sneyt             #+#    #+#             */
/*   Updated: 2023/01/10 09:01:46 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Default constructor
Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called for " << this->_name << " with a grade of " << this->_grade << std::endl; // this->_name & this->_grade -> should use the getters
}

//Copy consturcotr
Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName() + "_copy")
{
	std::cout << "Bureaucrat Copy constructor called to copy " << src.getName() << " to " << this->getName() << std::endl;
	*this = src;
}

//Other constructors
Bureaucrat::Bureaucrat(int grade): _name("Default")
{
	std::cout << "Bureaucrat constructor called for " << this->_name << " with a grade of " << this->_grade << std::endl; // this->_name & this->_grade -> should use the getters
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{
	std::cout << "Bureaucrat Constructor called for " << this->getName() << " with a grade of " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	this->setGrade(grade);
	std::cout << "Bureaucrat Constructor called for " << this->getName() << " with a grade of " << this->getGrade() << std::endl;
}

//Destructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called for " << this->_name << std::endl;
}

//Copy/assignation operator overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_grade = src.getGrade();
	return *this;
}

//public methods
void Bureaucrat::incrementGrade(void)
{
	this->setGrade(this->_grade - 1);
	std::cout << "Trying to increment grade of " << this->getName() << " to a grade of " << this->getGrade()<< std::endl; // check if grade is not going lower then 1
}

void Bureaucrat::decrementGrade(void)
{
	// check if grade does not go above 150
	this->setGrade(this->_grade + 1);
	std::cout << "Trying to decrement grade of " << this->getName() << " to a grade of " << this->getGrade() << std::endl;
}

//getters & setter
int	Bureaucrat::getGrade(void)const
{
	return(this->_grade);
}

const std::string	Bureaucrat::getName(void)const
{
	return(this->_name);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

// Exceptions
const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade to low");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade to high");
}

// ostream overload 
std::ostream &operator<<(std::ostream &stream, Bureaucrat *b)
{
	stream << "Bureaucrat " << b->getName() << " :\n\t\t- grade: " << b->getGrade() << 	std::endl;
	return (stream);
}
