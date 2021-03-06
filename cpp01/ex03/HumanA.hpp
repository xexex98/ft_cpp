/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:58:08 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/11 22:42:11 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
 #define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
		
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void attack( void );
};

#endif