/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:31:44 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/24 21:30:17 by mbarra           ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) : Form(ShrubberyCreationForm.getName(), ShrubberyCreationForm.getTarget(), 145, 137) {}

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
	file << "  @  @WW@ @ /__@ " << std::endl;
	file << "  @@@ @W/ @/  @ @ " << std::endl;
	file << " @WWWWW/@| @ | @ " << std::endl;
	file << "@__WW W |/ WW / @ " << std::endl;
	file << "   __W|@|  ||/__/@ " << std::endl;
	file << "  /  W \\  / /__ " << std::endl;
	file << " @    W  W /   @ " << std::endl;
	file << "       |' '| " << std::endl;
	file << "       |'' | " << std::endl;
	file << "      ~|'  | ~" << std::endl;
	file << "  ~~~~       ~~~~ " << std::endl;
	file << "~~               ~~~ " << std::endl;

	file.close();
}
