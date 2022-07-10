/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:41:46 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 21:23:52 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) { 
	
	std::cout << GREEN"WrongCat " DEFAULT
						<< "Default Constructor called!" << std::endl;
	this->type = "WrongCat"; 
};

WrongCat::~WrongCat(void) { 

	std::cout << RED"WrongCat " DEFAULT
						<< "Default Destructor called!" << std::endl;
};

WrongCat & WrongCat::operator = (const WrongCat & WrongCat) {
  
	std::cout << CYAN"WrongCat "DEFAULT
						<< "Copy assigment operator called!" << std::endl;
	this->type = WrongCat.getType();
	return *this;
};

WrongCat::WrongCat(const WrongCat & WrongCat) {
  
	std::cout << CYAN"WrongCat "DEFAULT
						<< "Copy constructor called!" << std::endl;
  *this = WrongCat;
};

void WrongCat::makeSound(void) const {
	
	std::cout << "Meow" << std::endl;
};