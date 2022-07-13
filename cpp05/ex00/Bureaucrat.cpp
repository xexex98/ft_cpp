/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:44 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/13 21:31:44 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

	std::cout << "Bureaucrat Default constructor called!" << std::endl;
	this->name = "RANDOM";
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{

	std::cout << "Bureaucrat Default constructor called!" << std::endl;
	this->name = name;

	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 200)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	
}

Bureaucrat::~Bureaucrat(void)
{

	std::cout << "Bureaucrat Default destructor called!" << std::endl;
}
