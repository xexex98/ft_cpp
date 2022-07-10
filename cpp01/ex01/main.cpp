/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:05:57 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/08 22:05:57 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void ){
	Zombie* zombie = Zombie::zombieHorde(5, "Foo");
	Zombie* zombie2 = Zombie::zombieHorde(5, "Au");

	zombie[0].announce();
	zombie2[0].announce();

	delete[] zombie;
	delete[] zombie2;

	return (0);
}