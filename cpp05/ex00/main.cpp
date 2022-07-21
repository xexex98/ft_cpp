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

int main(void)
{
	// TODO: delete and cheack leaks
	try
	{
		Bureaucrat *b = new Bureaucrat("Ivan", 150);
		std::cout << b;
		// b.incGrade();
		// std::cout << b.getGrade() << std::endl;
		// b.decGrade();
		// std::cout << b.getGrade() << std::endl;

		// b.decGrade();
		// std::cout << b.getGrade() << std::endl;
		// b.incGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}