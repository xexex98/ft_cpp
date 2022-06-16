/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:58:08 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/11 21:55:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
 #define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
		
	public:
		HumanB( std::string name );
		~HumanB( void );
		void setWeapon( Weapon &weapon );
		void attack( void );
};

#endif