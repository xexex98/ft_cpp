/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:44:50 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/11 22:43:10 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ){	this->type = weapon; }

Weapon::~Weapon( void ){}

void Weapon::setType(std::string type){	this->type = type; }

std::string Weapon::getType( void ){ return this->type; } 
