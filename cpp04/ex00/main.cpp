/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:52:11 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 21:30:51 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;

		std::cout << std::endl;
		const WrongAnimal *wrong_meta = new WrongAnimal();
		const WrongAnimal *c = new WrongCat();
		std::cout << wrong_meta->getType() << " " << std::endl;
		std::cout << c->getType() << " " << std::endl;
		c->makeSound(); // will output the AAA sound!
		wrong_meta->makeSound(); // will output the AAA sound!

		const WrongCat *wrong_cat = new WrongCat();
		wrong_cat->makeSound(); // will output the cat sound!

		delete wrong_meta;
		delete c;
		delete wrong_cat;

		return 0;
}