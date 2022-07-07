/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:40:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/08 01:16:12 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact(void) {return ;}
Contact::~Contact(void) {return ;}

void Contact::setFirstName(std::string str){this->firstName = str;}
void Contact::setLastName(std::string str){this->lastName = str;}
void Contact::setNickName(std::string str){this->nickName = str;}
void Contact::setPhone(std::string str){this->phone = str;}
void Contact::setDarkestSecret(std::string str){this->darkestSecret = str;}

std::string Contact::getFirstName(void) {return this->firstName;}
std::string Contact::getLastName(void) {return this->lastName;}
std::string Contact::getNickName(void) {return this->nickName;}
std::string Contact::getPhone(void) {return this->phone;}
std::string Contact::getDarkestSecret(void) {return this->darkestSecret;}
