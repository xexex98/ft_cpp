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

#include "Bureaucrat.hpp"

int main()
{

	Bureaucrat *b = new Bureaucrat("Denim", 1);
	Form *f = new Form("SIMPLE_FORM", 5, 5);
	std::cout << *b << std::endl;

	try
	{
		b->incGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	b->decGrade();
	b->signForm(*f);

	delete f;

	f = new Form("MAIN_FORM", 1, 1);

	b->signForm(*f);
	std::cout << *b << std::endl;

	delete f;
	delete b;

	return 0;
}
