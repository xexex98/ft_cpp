/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:49:03 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 21:29:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Form Default constructor called!" << std::endl;
	this->name = "Form";
	this->indicator = false;
	this->iSign = 10;
	this->iExecute = 10;
}

Form::Form(std::string const name, int const iSign, int const iExecute)
{
	std::cout << "Form constructor called!" << std::endl;
	this->name = name;
	this->indicator = false;
	this->iSign = iSign;
	this->iExecute = iExecute;
}

Form::Form(std::string const name, std::string const target, int const iSign, int const iExecute)
{
	std::cout << "Form constructor called!" << std::endl;
	this->name = name;
	this->target = target;
	this->indicator = false;
	this->iSign = iSign;
	this->iExecute = iExecute;
}

Form::~Form(void)
{
	std::cout << "Form Default destructor called!" << std::endl;
}

Form::Form(const Form &Form)
{
	std::cout << "Form copy constructor" << std::endl;
	this->name = Form.getName();
	this->indicator = Form.getIndicator();
	this->iSign = Form.getiSign();
	this->iExecute = Form.getiExecute();
}

Form &Form::operator=(Form const &Form)
{
	if (this == &Form)
	{
		return *this;
	}
	this->name = Form.getName();
	this->indicator = Form.getIndicator();
	this->iSign = Form.getiSign();
	this->iExecute = Form.getiExecute();
	return *this;
}

std::string Form::getName() const
{
	return this->name;
}

int Form::getiSign() const
{
	return this->iSign;
}

int Form::getiExecute() const
{
	return this->iExecute;
}

bool Form::getIndicator() const
{
	return this->indicator;
}

std::string Form::getTarget() const
{
	return this->target;
}

void Form::beSigned(Bureaucrat const &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= this->getiSign())
	{
		this->indicator = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

void Form::execute(Bureaucrat const &Bureaucrat) const
{
	if (this->getIndicator() && Bureaucrat.getGrade() <= this->getiExecute())
	{
		this->executer();
	}
	else if (!this->getIndicator())
		throw Form::NotSignedException();
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &Form)
{
	os << Form.getName() << ", form is signed: " << Form.getIndicator() << ", grade to sign: " << Form.getiSign() << ", grade to exec: " << Form.getiExecute() << ".";
	return os;
}