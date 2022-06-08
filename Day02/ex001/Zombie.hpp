/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:26:01 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/08 21:26:01 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie( void );
		~Zombie( void );

		void announce( void );
		static Zombie* zombieHorde( int N, std::string name );
	private:
		std::string name;

};

#endif