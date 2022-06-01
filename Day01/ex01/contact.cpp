/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:40:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/01 22:55:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact(void) {return ;}
Contact::~Contact(void) {return ;}

void Contact::setFirstName(void){getline(std::cin, this->firstName);}
void Contact::setLastName(void){getline(std::cin, this->lastName);}
void Contact::setNickName(void){getline(std::cin, this->nickName);}
void Contact::setPhone(void){getline(std::cin, this->phone);}
void Contact::setDarkestSecret(void){getline(std::cin, this->darkestSecret);}

std::string Contact::getFirstName(void) {return this->firstName;}
std::string Contact::getLastName(void) {return this->lastName;}
std::string Contact::getNickName(void) {return this->nickName;}
std::string Contact::getPhone(void) {return this->phone;}
std::string Contact::getDarkestSecret(void) {return this->darkestSecret;}