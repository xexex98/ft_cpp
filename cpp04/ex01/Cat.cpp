/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:41:46 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 21:24:01 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) { 
	
	std::cout << GREEN"Cat " DEFAULT
						<< "Default Constructor called!" << std::endl;
	this->type = "Cat"; 
};

Cat::~Cat(void) { 

	std::cout << RED"Cat " DEFAULT
						<< "Default Destructor called!" << std::endl;
};

Cat & Cat::operator = (const Cat & Cat) {
  
	std::cout << CYAN"Cat "DEFAULT
						<< "Copy assigment operator called!" << std::endl;
	this->type = Cat.getType();
	return *this;
};

Cat::Cat(const Cat & Cat) {
  
	std::cout << CYAN"Cat "DEFAULT
						<< "Copy constructor called!" << std::endl;
  *this = Cat;
};

void Cat::makeSound(void) const {
	
	std::cout << "Meow" << std::endl;
};