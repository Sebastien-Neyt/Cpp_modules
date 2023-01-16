/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:27:49 by sneyt             #+#    #+#             */
/*   Updated: 2023/01/10 11:05:35 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors /////////////////////////////////

Form::Form(void): _name("Default"), _is_signed(false), _grade_to_sign(150), _grade_to_exec(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &src): _name(src.getName() + "_copy"), _is_signed(false),
	_grade_to_sign(src.getGradeToSign()), _grade_to_exec(src.getGradeToExec())
{
	std::cout << "From copy constructor called to copy " << src.getName() << " into " << this->getName() << std::endl;
	*this = src;
}

Form::Form(int grade_to_sign, int grade_to_exec): _name("Default"), _is_signed(false),
   	_grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	std::cout << "From constructor called for " << this->getName() << " with a grade to sign of " <<  this->getGradeToSign() << " and a grade to execute of " << this->getGradeToExec() << std::endl;
	const int tmp1 = this->getGradeToSign();
	const int tmp2 = this->getGradeToExec();
	if (tmp1 > 150 || tmp2 > 150)
		throw(Form::GradeTooLowException());
	else if (tmp1 < 1 || tmp2 < 1)
		throw(Form::GradeTooHighException());
}

Form::Form(const std::string name, int grade_to_sign, int grade_to_exec): _name(name), _is_signed(false),
   	_grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	std::cout << "From constructor called for " << this->getName() << " with a grade to sign of " <<  this->getGradeToSign() << " and a grade to execute of " << this->getGradeToExec() << std::endl;
	const int tmp1 = this->getGradeToSign();
	const int tmp2 = this->getGradeToExec();
	if (tmp1 > 150 || tmp2 > 150)
		throw(Form::GradeTooLowException());
	else if (tmp1 < 1 || tmp2 < 1)
		throw(Form::GradeTooHighException());
}

Form::Form(const std::string name): _name(name), _is_signed(false), _grade_to_sign(150), _grade_to_exec(150)
{
	std::cout << "Form constructor called for " << this->getName() <<  " with a grade to sign of " <<  this->getGradeToSign() << " and a grade to execute of " << this->getGradeToExec() << std::endl;
}

// Destructor ////////////////////////////
Form::~Form(void)
{
	std::cout << "Form Destructor called for " << this->getName() << std::endl;
}

// overload operator /////////////////////
Form &Form::operator=(const Form &src)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	// nothing to copy
	return (*this);
}

// Getters //////////////////////////
const std::string Form::getName(void)const
{
	return (this->_name);
}

const std::string Form::getIsSigned(void)const
{
	if (this->_is_signed)
		return ("OK");
	else
		return ("NOT SIGNED");
}

bool Form::getIsSignedBool(void)const
{
	return (this->_is_signed);
}

int	Form::getGradeToSign(void)const
{
	return (this->_grade_to_sign);
}

int Form::getGradeToExec(void)const
{
	return (this->_grade_to_exec);
}

// Public methods /////////////////////
void	Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > this->getGradeToSign())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getIsSigned() == "NOT SIGNED")
	{
		this->_is_signed = true;
		std::cout << this->getName() << " Form was signed by " << signer.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " Form is already signed " << std::endl;
}

// Exceptions ///////////////////////////
const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
};
const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

// Ostream overload
std::ostream &operator<<(std::ostream &o, Form *a)
{
	o << "Form " << a->getName() << ":\n\tsign-grade:\t" << a->getGradeToSign() <<
		"\n\texec-grade:\t" << a->getGradeToExec() << "\n\tis signed:\t" << 
		a->getIsSigned() << std::endl;
	return (o);
}
