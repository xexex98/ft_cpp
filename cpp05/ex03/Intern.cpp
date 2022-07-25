/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:44 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/25 23:43:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor called!" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern Default destructor called!" << std::endl;
}

Intern::Intern(const Intern &Intern)
{
	(void)Intern;
	std::cout << "Intern copy constructor" << std::endl;
}

Intern &Intern::operator=(Intern const &Intern)
{
	if (this == &Intern)
	{
		return *this;
	}
	return *this;
}

Form *Intern::makeForm(std::string formName, std::string targetForm) const
{

	std::string forms[3] = {"ShrubberyCreationForm",
							"RobotomyRequestForm",
							"PresidentialPardonForm"};

	int i = 0;
	while (i < 3 && formName.compare(forms[i]))
		i++;

	switch (i)
	{
	case (0):
		return (new ShrubberyCreationForm(targetForm));
	case (1):
		return (new RobotomyRequestForm(targetForm));
	case (2):
		return (new PresidentialPardonForm(targetForm));
	default:
	{
		std::cout << "Unknown form type" << std::endl;
		return NULL;
	}
	}
}