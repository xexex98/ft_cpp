/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:00:58 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 20:02:45 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	
	this->type = "WHO?";
	std::cout << GREEN "Animal " DEFAULT
						<< "Default Constructor called!" << std::endl;
};

Animal::~Animal(void) {

	std::cout << RED "Animal " DEFAULT
						<< "Default Constructor called!" << std::endl;
};

Animal & Animal::operator = (const Animal & Animal) {

	std::cout << CYAN "Animal " DEFAULT
						<< "Copy assigment operator called!" << std::endl;
	this->type = Animal.type;
	return *this;
}

Animal::Animal(const Animal & Animal) {

	std::cout << CYAN"Animal "DEFAULT
						<< "Copy constructor called!" << std::endl;
    *this = Animal;
}

void Animal::makeSound(void) {
	
	std::cout << "AAAAAA!" << std::endl;
}

std::string Animal::getType(void) {
	
	return this->type;
}
