/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:12:41 by sneyt             #+#    #+#             */
/*   Updated: 2023/01/10 10:47:36 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _grade_to_sign;
		const int _grade_to_exec;
	public:
		// Constructors
		Form(void);
		Form(const Form &src);
		Form(int grade_to_sign, int grade_to_exec);
		Form(const std::string name);
		Form(const std::string name, int grade_to_sign, int grade_to_exec);

		// Destructor
		~Form(void);

		// Operator overload
		Form &operator=(const Form &src);

		// Methods
		void	beSigned(Bureaucrat &signer);

		// Getter
		const std::string getName(void)const;
		const std::string getIsSigned(void)const;
		bool getIsSignedBool(void)const;
		int getGradeToSign(void)const;
		int getGradeToExec(void)const;

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
};

// ostream overload
std::ostream &operator<<(std::ostream &o, Form *a);
