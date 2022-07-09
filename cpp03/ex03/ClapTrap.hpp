/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:17:11 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/09 21:52:19 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP__
# define __CLAPTRAP__

#include <iostream>

# define RED  "\033[31m"
# define GREEN "\033[33;32m"
# define YELLOW "\033[33;33m"
# define BLUE "\033[33;34m"
# define MAGNETA "\033[33;35m"
# define CYAN "\033[33;36m"

# define DEFAULT "\033[33;0m"

class ClapTrap
{
protected:
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
