/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:51:40 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/11 22:42:58 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
 #define __WEAPON_HPP__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon( std::string weapon );
		~Weapon( void );
		void 				setType( std::string type );
		std::string getType( void );
};

#endif