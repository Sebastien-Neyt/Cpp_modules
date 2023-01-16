/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 08:24:09 by sneyt             #+#    #+#             */
/*   Updated: 2023/01/10 08:39:40 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
	public:
		// Constructor & Destructor
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);
		
		// Copy constructor
		Bureaucrat(const Bureaucrat &src);
		
		// Copy assignment overload
		Bureaucrat &operator=(const Bureaucrat &src);
		
		// public methods
		void incrementGrade(void);
		void decrementGrade(void);
		
		// Getters & setters
		const std::string getName(void)const;
		int	getGrade(void)const;

		// Exceptions
		class GradeTooLowException : public std::exception
		{	
			public:
				virtual const char *what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		//private attributes
		const std::string _name;
		int	_grade;
		
		//private method
		void setGrade(int grade);
};
// ostream overload
std::ostream &operator<<(std::ostream &stream, Bureaucrat *b);
