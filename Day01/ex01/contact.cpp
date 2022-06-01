/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:40:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/01 22:48:05 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact(void) {return ;}
Contact::~Contact(void) {return ;}

void Contact::setFirstName(void){getline(cin, this->firstName);}
void Contact::setLastName(void){getline(cin, this->lastName);}
void Contact::setNickName(void){getline(cin, this->nickName);}
void Contact::setPhone(void){getline(cin, this->phone);}
void Contact::setDarkestSecret(void){getline(cin, this->darkestSecret);}

string Contact::getFirstName(void) {return this->firstName;}
string Contact::getLastName(void) {return this->lastName;}
string Contact::getNickName(void) {return this->nickName;}
string Contact::getPhone(void) {return this->phone;}
string Contact::getDarkestSecret(void) {return this->darkestSecret;}