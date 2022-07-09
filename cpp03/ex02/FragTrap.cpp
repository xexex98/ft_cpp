/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:03:55 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/09 20:58:09 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->name = "DEFAULT";
    this->hp = 100;
    this->mp = 100;
    this->dmg = 30;
    std::cout << GREEN"FragTrap "DEFAULT<< "Default Constructor Called!" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hp = 100;
    this->mp = 50;
    this->dmg = 20;
    std::cout << GREEN"FragTrap "DEFAULT<< "Constructor Called!" <<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << RED"FragTrap "DEFAULT<< "Destructor Called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << YELLOW"FragTrap want to give highFivesGuys."DEFAULT << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap & FragTrap)
{
    std::cout << CYAN"FragTrap "DEFAULT << "Copy assigment operator called!" << std::endl;

    if (this == &FragTrap) {
        return *this;
    }
    this->name = FragTrap.name;
    this->hp = FragTrap.hp;
    this->mp = FragTrap.mp;
    this->dmg = FragTrap.dmg;
    return *this;
}

FragTrap::FragTrap(const FragTrap & FragTrap)
{
    std::cout << CYAN"FragTrap "DEFAULT << "Copy constructor called!" << std::endl;
    *this = FragTrap;
}
