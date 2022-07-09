/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:03:55 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/09 21:25:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->name = "DEFAULT SCAV";
    this->hp = 10;
    this->mp = 10;
    this->dmg = 0;
    std::cout << GREEN"ScavTrap "DEFAULT<< "Default Constructor Called!" << std::endl;

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hp = 100;
    this->mp = 50;
    this->dmg = 20;
    std::cout << GREEN"ScavTrap "DEFAULT<< "Constructor Called!" <<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED"ScavTrap "DEFAULT<< "Destructor Called!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << YELLOW"ScavTrap "<< "is now in Gate keeper mode."DEFAULT << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap & scavtrap)
{
    std::cout << CYAN"ScavTrap "DEFAULT << "Copy assigment operator called!" << std::endl;

    if (this == &scavtrap) {
        return *this;
    }
    this->name = scavtrap.name;
    this->hp = scavtrap.hp;
    this->mp = scavtrap.mp;
    this->dmg = scavtrap.dmg;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap & scavtrap)
{
    std::cout << CYAN"ScavTrap "DEFAULT << "Copy constructor called!" << std::endl;
    *this = scavtrap;
}
