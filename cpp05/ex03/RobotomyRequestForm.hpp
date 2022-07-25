/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:22 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 21:25:11 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUSTFORM__
#define __ROBOTOMYREQUSTFORM__

#include <iostream>
#include "Bureaucrat.hpp"

#include "Form.hpp"
#include <stdlib.h>
class RobotomyRequestForm : public virtual Form
{

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &RobotomyRequestForm);

	void executer() const;
};
std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &in);

#endif