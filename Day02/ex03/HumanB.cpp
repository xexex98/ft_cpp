/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:15:16 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/11 22:42:24 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL){}

HumanB::~HumanB( void ){}

void HumanB::setWeapon( Weapon &weapon ){	this->weapon = &weapon; }

void HumanB::attack(void)
{
	if(weapon)
		std::cout << this->name << "attacks with their" << weapon->getType() << std::endl;
	else
		std::cout << this->name << " does not have a weapon to attack!" << std::endl;
}