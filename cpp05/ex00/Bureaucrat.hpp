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
# define __BUREAUCRAT__

#include <iostream>

class Bureaucrat
{
public:
	std::string name;
	int grade;

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);

	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return "TOO HIGHT";
		}
	};

	
	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return "TOO LOW";

		}
	};
};

#endif