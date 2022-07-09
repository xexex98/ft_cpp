/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:20:07 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/09 20:56:09 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
    FragTrap defClap;
    FragTrap withName("Denim");
    FragTrap Copy(withName);

    withName.attack("Hammer");
    withName.takeDamage(70);
    withName.takeDamage(50);
    withName.beRepaired(80);
    Copy.attack("Hummer");
    Copy.takeDamage(90);
    Copy.takeDamage(10);
    Copy.beRepaired(80);
    Copy.highFivesGuys();
    
    return (0);
}