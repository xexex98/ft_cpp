/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:05:11 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/08 01:15:09 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "VALERA";
    this->hp = 10;
    this->mp = 10;
    this->dmg = 0;   
    std::cout << "Constructor called! New NPC: " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Dectructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called! New character: " << name << std::endl;
    this->name = name;
    this->hp = 10;
    this->mp = 10;
    this->dmg = 0;   
}

ClapTrap::ClapTrap(const ClapTrap & claptrap)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = claptrap;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & claptrap)
{
    std::cout << "Copy assigment operator called!" << std::endl;
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
            std::cout << this->name << " attacked " << target << " for " << (this->dmg) << " dmg!"<< std::endl;
        }
        else {
            std::cout << this->name << " missed because he has: " << this->mp << " mp!" << std::endl;
        }
    } else {
        std::cout <<  this->name << " died! Chill." << std::endl;
    }
    std::cout << this->name << " have: "<< this->hp << " hp, " << this->mp  << " mp!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp > 0) {
        (this->hp -= amount);
        std::cout << this->name << " take damage!" << "Current hp: " << (this->hp > 0 ? this->hp : this->hp = 0) << std::endl;   
    } else {
        std::cout << "You lose!" << std::endl;
        std::cout << this->name << " have: "<< this->hp << " hp, " << this->mp  << " mp!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp > 0) {
        if (this->mp > 0) {        
            std::cout << "Holy heal! " << "Current hp: " << (this->hp += amount) << " ";
            std::cout << "Current mp: " << --(this->mp) << std::endl;
        }
        else {
            std::cout << "Empty mp! Current mp: " << this->mp << std::endl;
        }
    } else {
        std::cout << "Too late "<< this-> name << " died! Chill." << std::endl;
    }
}
