/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:17:11 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/08 01:13:56 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP__
# define __CLAPTRAP__

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int         hp;
    int         mp;
    int         dmg;
public:
    ClapTrap( void );
    ~ClapTrap( void );
    ClapTrap(std::string name);
    ClapTrap & operator = (const ClapTrap & claptrap);
    ClapTrap(const ClapTrap & claptrap);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
