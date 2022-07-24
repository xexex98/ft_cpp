/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:22 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 13:57:07 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM__
#define __PRESIDENTIALPARDONFORM__

#include <iostream>
#include "Form.hpp"
class PresidentialPardonForm : public virtual Form
{

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &PresidentialPardonForm);

	void executer() const;
};

#endif