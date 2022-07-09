/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:20:07 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/09 21:57:55 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


// TODO: посмотерть что аткое virtual

int main(void)
{
    DiamondTrap defClap;
    DiamondTrap withName("Denim");


    withName.attack("Hammer");
    withName.takeDamage(70);
    withName.takeDamage(50);
    withName.beRepaired(80);
    defClap.whoAmI();
    withName.whoAmI();
    
    return (0);
}