/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:44 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 14:23:06 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", "president", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", target, 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Default destructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm)
{
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ShrubberyCreationForm)
{
	(void)ShrubberyCreationForm;
	return *this;
}

void ShrubberyCreationForm::executer() const
{
	std::ofstream file;
	file.open(this->getTarget() + "_shrubbery");

	file << "    @ @ @  @ @ @ " << std::endl;
	file << "  @  @\/@ @ /__@ " << std::endl;
	file << "  @@@ @\ / @/  @ @ " << std::endl;
	file << " @\  \/@| @ | @ " << std::endl;
	file << "@__\@ \ |/ \| / @ " << std::endl;
	file << "   __\|@|  ||/__/@ " << std::endl;
	file << "  /  \ \\  / /__ " << std::endl;
	file << " @    \  \/ /   @ " << std::endl;
	file << "       |' '| " << std::endl;
	file << "       |'' | " << std::endl;
	file << "      ~|'  | ~" << std::endl;
	file << "  ~~~~       ~~~~ " << std::endl;
	file << "~~               ~~~ " << std::endl;

	file.close();
}
