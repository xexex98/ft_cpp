/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:51:28 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/13 21:51:28 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern *someRandomIntern = new Intern();
	Form *f;
	f = someRandomIntern->makeForm("ShrubberyCreationForm", "Bender");
	delete f;
	f = someRandomIntern->makeForm("RobotomyRequestForm", "Bender");
	delete f;
	f = someRandomIntern->makeForm("PresidentialPardonForm", "Bender");
	delete f;
	f = someRandomIntern->makeForm("zazaza", "Bender");
	delete f;

	delete someRandomIntern;
	return 0;
}
