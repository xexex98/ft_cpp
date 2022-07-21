/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:49:53 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/22 01:23:27 by mbarra           ###   ########.fr       */
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

public:
	Form(void);
	Form(std::string name, int iSign, int iExecute);
	~Form(void);
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

	std::string getName() const;
	int getiSign() const;
	int getiExecute() const;
	bool getIndicator() const;
	void beSigned(Bureaucrat const &Bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &Form);

#endif