/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:30:40 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/08 21:30:40 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie* zombie;
	
	if (N <= 0)
		return NULL;
	zombie = new Zombie[N];
	for(int i = 0; i < N; i++){
		zombie[i].name = name;
	}
	return zombie;
}