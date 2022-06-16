/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:25:53 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/08 21:25:53 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
};

void		randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif