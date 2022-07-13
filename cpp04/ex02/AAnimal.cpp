/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:00:58 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/13 20:31:44 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	
	this->type = "WHO?";
	std::cout << GREEN "AAnimal " DEFAULT
						<< "Default Constructor called!" << std::endl;
};

AAnimal::~AAnimal(void) {

	std::cout << RED "AAnimal " DEFAULT
						<< "Default Constructor called!" << std::endl;
};

AAnimal & AAnimal::operator = (const AAnimal & AAnimal) {

	std::cout << CYAN "AAnimal " DEFAULT
						<< "Copy assigment operator called!" << std::endl;
	this->type = AAnimal.getType();
	return *this;
}

AAnimal::AAnimal(const AAnimal & AAnimal) {

	std::cout << CYAN"AAnimal "DEFAULT
						<< "Copy constructor called!" << std::endl;
  *this = AAnimal;
}

void AAnimal::makeSound(void) const {
	
	std::cout << "AAAAAA!" << std::endl;
}

std::string AAnimal::getType(void) const{
	
	return this->type;
}
