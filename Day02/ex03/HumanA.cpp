/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:15:10 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/11 22:44:00 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : name(name), weapon(weapon){}

HumanA::~HumanA( void ){}

void HumanA::attack( void )
{	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl; }