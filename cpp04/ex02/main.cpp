/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:07:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/04 23:12:06 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <ctime>

int main(void)
{
	std::srand(std::time(nullptr));

	{
		const AAnimal *j = new Dog();
		const AAnimal *i = new Cat();

		std::cout << j->getBrain()->getIdea(std::rand() % 100) << std::endl;
		std::cout << i->getBrain()->getIdea(std::rand() % 100) << std::endl;
		delete j; // should not create a leak
		delete i;
	}

	const int list_size = 4;
	AAnimal *Aanimal_list[list_size];

	for (size_t i = 0; i < list_size; i++)
	{
		if (i % 2)
			Aanimal_list[i] = new Cat();
		else
			Aanimal_list[i] = new Dog();
	}

	for (size_t i = 0; i < list_size; i++)
	{
		std::cout << (Aanimal_list[i])->getBrain()->getIdea(std::rand() % 100) << std::endl;
		delete Aanimal_list[i];
	}

	//    const AAnimal* j = new AAnimal();
	//    std::cout << j->getType() << std::endl;
	//    delete j;

	return 0;
}