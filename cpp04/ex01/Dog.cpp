/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:38:08 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/25 22:46:42 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{

	std::cout << GREEN "Dog " DEFAULT
			  << "Default Constructor called!" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
};

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << RED "Dog " DEFAULT
			  << "Default Destructor called!" << std::endl;
};

Dog &Dog::operator=(const Dog &Dog)
{
	std::cout << CYAN "Dog " DEFAULT
			  << "Copy assigment operator called!" << std::endl;
	this->type = Dog.getType();
	return *this;
};

Dog::Dog(const Dog &Dog)
{

	std::cout << CYAN "Dog " DEFAULT
			  << "Copy constructor called!" << std::endl;
	*this = Dog;
};

void Dog::makeSound(void) const
{

	std::cout << "Bark" << std::endl;
};

Brain *Dog::getBrain(void) const
{
	return this->brain;
}