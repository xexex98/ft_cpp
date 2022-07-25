/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:22 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/25 23:11:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__
#define __INTERN__

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class RobotomyRequestForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;

class Intern
{

public:
	Intern(void);
	~Intern(void);
	Intern(const Intern &Intern);
	Intern &operator=(Intern const &Intern);

	Form *makeForm(std::string formName, std::string targetForm) const;
};

#endif