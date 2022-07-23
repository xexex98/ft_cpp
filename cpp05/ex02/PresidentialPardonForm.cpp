/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:44 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/23 23:45:54 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Default constructor called!" << std::endl;
	this->name = "RANDOM";
	this->grade = 100;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int grade)
{
	std::cout << "PresidentialPardonForm constructor called!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Default destructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm)
{
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
	this->name = PresidentialPardonForm.name;
	this->grade = PresidentialPardonForm.grade;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &PresidentialPardonForm)
{
	if (this == &PresidentialPardonForm)
	{
		return *this;
	}
	return *this;
}

// std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &PresidentialPardonForm)
// {
// 	os << PresidentialPardonForm.getName() << ", PresidentialPardonForm grade " << PresidentialPardonForm.getGrade() << "." << std::endl;
// 	return os;
// }
