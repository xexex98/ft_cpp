/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:00:58 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 21:21:35 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	
	this->type = "WrongAnimal";
	std::cout << GREEN "WrongAnimal " DEFAULT
						<< "Default Constructor called!" << std::endl;
};

WrongAnimal::~WrongAnimal(void) {

	std::cout << RED "WrongAnimal " DEFAULT
						<< "Default Constructor called!" << std::endl;
};

WrongAnimal & WrongAnimal::operator = (const WrongAnimal & WrongAnimal) {

	std::cout << CYAN "WrongAnimal " DEFAULT
						<< "Copy assigment operator called!" << std::endl;
	this->type = WrongAnimal.getType();
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal & WrongAnimal) {

	std::cout << CYAN"WrongAnimal "DEFAULT
						<< "Copy constructor called!" << std::endl;
  *this = WrongAnimal;
}

void WrongAnimal::makeSound(void) const {
	
	std::cout << "AAAAAA!" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	
	return this->type;
}
