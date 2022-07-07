/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:20:07 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/08 01:14:27 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ct("Ivan");

    ct.attack("as");
    ct.beRepaired(5);
    // std::string s = "ivan";
    // ct.attack(s);
    
    return (0);
}