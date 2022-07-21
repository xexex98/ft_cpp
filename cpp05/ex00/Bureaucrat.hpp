/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:22 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/13 21:31:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__

#include <iostream>

class Bureaucrat
{

private:
	std::string name;
	int grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &Bureaucrat);
	Bureaucrat &operator=(Bureaucrat const &Bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "TOO HIGHT";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "TOO LOW";
		}
	};

	std::string getName(void) const;
	int getGrade(void) const;

	void incGrade();
	void decGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat);

#endif