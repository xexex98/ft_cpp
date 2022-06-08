/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:44:37 by marvin            #+#    #+#             */
/*   Updated: 2022/06/08 18:44:37 by marvin           ###   ########.fr       */
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