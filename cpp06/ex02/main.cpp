/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:11:33 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/02 00:23:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
	int rand = std::rand();

	std::cout << "Generate: ";

	if (rand % 3 == 0)
	{
		std::cout << "A" << std::endl;
		return new A;
	}
	else if (rand % 2 == 0)
	{
		std::cout << "B" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "C" << std::endl;
		return new C;
	}
}

void identify(Base *p)
{
	std::cout << "Identify: ";
	if (dynamic_cast<A *>(p))
	{
		std::cout << "Class A\t";
	}
	else if (dynamic_cast<B *>(p))
	{
		std::cout << "Class B\t";
	}
	else if (dynamic_cast<C *>(p))
	{
		std::cout << "Class C\t";
	}
	else
	{
		std::cout << "Unknown Class\t";
	}
}

void identify(Base &p)
{
	std::cout << "Reference: ";
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Class A\t";
		return;
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Class B\t";
		return;
	}
	catch (const std::exception &e)
	{
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Class C\t";
		return;
	}
	catch (const std::exception &e)
	{
	}
	std::cout << "Unknown Class\t";
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	std::srand(time(NULL));

	for (size_t i = 0; i < 5; i++)
	{
		Base *random = generate();

		identify(random);
		identify(*random);

		delete random;
		std::cout << "Step: " << i << std::endl;
	}
	return 0;
}
