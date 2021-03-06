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
	Bureaucrat *new_b = new Bureaucrat("NewDenim", 150);

	try
	{
		Bureaucrat *wrong_b = new Bureaucrat("WrongDenim", 1200);
		std::cout << *wrong_b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << *b << std::endl;
	std::cout << *new_b << std::endl;

	try
	{
		b->incGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		new_b->decGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	b->decGrade();
	std::cout << *b << std::endl;

	delete b;
	delete new_b;
}