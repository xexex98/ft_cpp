/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:03:55 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/09 21:55:50 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->name = "DEFAULT DIAMOND";
    this->hp = 100;
    this->mp = 100;
    this->dmg = 30;
    std::cout << GREEN"DiamondTrap "DEFAULT<< "Default Constructor Called! " << this->name << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name), ClapTrap(name)
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hp = FragTrap::hp;
    this->mp = ScavTrap::mp;
    this->dmg = FragTrap::dmg;
    std::cout << GREEN"DiamondTrap "DEFAULT<< "Constructor Called! " << this->name <<std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED"DiamondTrap "DEFAULT<< "Destructor Called! " << this->name <<std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << YELLOW  << this->name << " " << ClapTrap::name << DEFAULT <<std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & DiamondTrap)
{
    std::cout << CYAN"DiamondTrap "DEFAULT << "Copy assigment operator called!" << std::endl;

    if (this == &DiamondTrap) {
        return *this;
    }
    this->name = DiamondTrap.name;
    this->hp = DiamondTrap.hp;
    this->mp = DiamondTrap.mp;
    this->dmg = DiamondTrap.dmg;
    return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap & DiamondTrap)
{
    std::cout << CYAN"DiamondTrap "DEFAULT << "Copy constructor called! " << this->name<<std::endl;
    *this = DiamondTrap;
}
