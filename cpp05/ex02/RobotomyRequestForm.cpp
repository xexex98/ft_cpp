/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:44 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 14:22:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", "president", 72, 45)
{
	std::cout << "RobotomyRequestForm Default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", target, 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Default destructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm)
{
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &RobotomyRequestForm)
{
	(void)RobotomyRequestForm;
	return *this;
}

void RobotomyRequestForm::executer() const
{
	int num = rand() % 2 + 1;
	if (num == 1)
	{
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " robotomy failed." << std::endl;
	}
}
