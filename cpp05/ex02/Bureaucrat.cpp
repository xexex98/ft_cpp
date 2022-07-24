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
	this->grade = 100;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "Bureaucrat constructor called!" << std::endl;
	this->name = name;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Default destructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	this->name = Bureaucrat.name;
	this->grade = Bureaucrat.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &Bureaucrat)
{
	if (this == &Bureaucrat)
	{
		return *this;
	}
	this->name = Bureaucrat.getName();
	this->grade = Bureaucrat.getGrade();
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void Bureaucrat::incGrade(void)
{
	this->grade > 1 ? this->grade-- : throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade(void)
{
	this->grade < 150 ? (this->grade)++ : throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat)
{
	os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << "." << std::endl;
	return os;
}

void Bureaucrat::signForm(Form &Form) const
{
	if (Form.getIndicator())
	{
		std::cout << this->name << " couldn’t sign " << Form.getName() << " because form is already signed." << std::endl;
		return;
	}
	try
	{
		Form.beSigned(*this);
		std::cout << this->name << " sign " << Form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->name << " couldn’t sign " << Form.getName() << " because grade is too low." << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &Form) const
{
}