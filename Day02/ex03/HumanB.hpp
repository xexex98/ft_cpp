/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:58:08 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/09 23:50:34 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
 #define __HUMANB_HPP__

 #include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
public:
	void attack();
	HumanB( std::string weapon);
	~HumanB();
};

void HumanB::attack(void)
{
	std::cout << "name" << "attacks with their" << "weapon" << std::endl;
}
HumanB::HumanB( std::string weapon )
{
	
}

HumanB::~HumanB()
{
}
#endif