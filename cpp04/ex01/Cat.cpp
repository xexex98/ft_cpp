/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:41:46 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/25 22:48:43 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << GREEN "Cat " DEFAULT
			  << "Default Constructor called!" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
};

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << RED "Cat " DEFAULT
			  << "Default Destructor called!" << std::endl;
};

Cat &Cat::operator=(const Cat &Cat)
{
	std::cout << CYAN "Cat " DEFAULT
			  << "Copy assigment operator called!" << std::endl;
	this->type = Cat.getType();
	return *this;
};

Cat::Cat(const Cat &Cat)
{
	std::cout << CYAN "Cat " DEFAULT
			  << "Copy constructor called!" << std::endl;
	*this = Cat;
};

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
};

Brain *Cat::getBrain(void) const
{
	return this->brain;
}