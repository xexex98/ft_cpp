/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:22 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 14:22:24 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM__
#define __SHRUBBERYCREATIONFORM__

#include <iostream>
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public virtual Form
{

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &ShrubberyCreationForm);

	void executer() const;
};

#endif