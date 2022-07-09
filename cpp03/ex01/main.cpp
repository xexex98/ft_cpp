/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:20:07 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/09 20:43:07 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap defClap;
    ScavTrap withName("Denim");
    ScavTrap Copy(withName);

    withName.attack("Hammer");
    withName.beRepaired(80);
    withName.takeDamage(70);
    withName.takeDamage(50);
    Copy.attack("Hummer");
    Copy.takeDamage(90);
    Copy.takeDamage(10);
    Copy.beRepaired(80);
    Copy.guardGate();
    
    return (0);
}