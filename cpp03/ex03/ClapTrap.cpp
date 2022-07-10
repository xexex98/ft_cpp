/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:05:11 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 18:44:12 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	this->name = "DEFAULT";
	this->hp = 10;
	this->mp = 10;
	this->dmg = 0;   
	std::cout << GREEN"ClapTrap "DEFAULT << "Deefault Constructor called! New NPC: " << name << std::endl;

}

ClapTrap::~ClapTrap()
{
	std::cout << RED"ClapTrap "DEFAULT<< "Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->mp = 10;
	this->dmg = 0;   
	std::cout << GREEN"ClapTrap "DEFAULT << "Constructor called! New character: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & claptrap)
{
	std::cout << CYAN"ClapTrap "DEFAULT << "Copy constructor called!" << std::endl;
	*this = claptrap;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & claptrap)
{
	std::cout << CYAN"ClapTrap "DEFAULT << "Copy assigment operator called!" << std::endl;
	if (this == &claptrap) {
		return *this;
	}
	this->name = claptrap.name;
	this->hp = claptrap.hp;
	this->dmg = claptrap.dmg;
	this->mp = claptrap.mp;
	return *this;
}

void ClapTrap::attack(const std::string & target)
{
	if (this->hp > 0) {
		if (this->mp > 0) {        
			std::cout << YELLOW << this->name << " attacked " << target << " for " << (this->dmg) << " dmg!"DEFAULT<< std::endl;
		}
		else {
			std::cout << this->name << " missed because he has: " << this->mp << " mp!" << std::endl;
		}
	} else {
		std::cout <<  this->name << " died! Chill." << std::endl;
	}
	std::cout << MAGNETA << this->name << " have: "<< this->hp << " hp, " << this->mp  << " mp!"DEFAULT << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0) {
		(this->hp -= amount);
		std::cout << RED << this->name << " take damage! " << "Current hp: " << (this->hp > 0 ? this->hp : this->hp = 0) << DEFAULT <<std::endl;   
	} else {
		std::cout << "You lose!" << std::endl;
		std::cout << MAGNETA << this->name << " have: "<< this->hp << " hp, " << this->mp  << " mp!" <<  DEFAULT <<std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp > 0) {
		if (this->mp > 0) {        
			std::cout << GREEN"Holy heal! " << "Current hp: " << (this->hp += amount) << " ";
			std::cout << "Current mp: " << --(this->mp) << DEFAULT <<std::endl;
		}
		else {
			std::cout << "Empty mp! Current mp: " << this->mp << std::endl;
		}
	} else {
		std::cout << "Too late "<< this-> name << " died! Chill." << std::endl;
	}
}
