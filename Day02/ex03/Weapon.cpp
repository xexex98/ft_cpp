/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:44:50 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/09 23:46:18 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ){	this->type = weapon;}

Weapon::~Weapon(){}

std::string Weapon::getType(void){	return this->type; }

void Weapon::setType(std::string type){	this->type = type; }
