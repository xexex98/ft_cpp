/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:44 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 13:57:06 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", "president", 25, 5)
{
	std::cout << "PresidentialPardonForm Default constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", target, 25, 5)
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
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &PresidentialPardonForm)
{
	(void)PresidentialPardonForm;
	return *this;
}

void PresidentialPardonForm::executer() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
