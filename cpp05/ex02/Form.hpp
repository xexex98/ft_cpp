/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:49:53 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 21:29:06 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__
#define __FORM__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string name;
	bool indicator;
	int iSign;
	int iExecute;
	std::string target;

public:
	Form(void);
	Form(std::string const name, int const iSign, int const iExecute);
	Form(std::string const name, std::string const target, int const iSign, int const iExecute);
	virtual ~Form(void);
	Form(const Form &Form);
	Form &operator=(Form const &Form);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "FORM TOO HIGHT";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "FORM TOO LOW";
		}
	};
	class NotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "NOT SIGNED";
		}
	};

	std::string getName() const;
	int getiSign() const;
	int getiExecute() const;
	bool getIndicator() const;
	void beSigned(Bureaucrat const &Bureaucrat);
	std::string getTarget() const;

	void execute(Bureaucrat const &executor) const;
	virtual void executer() const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &Form);

#endif