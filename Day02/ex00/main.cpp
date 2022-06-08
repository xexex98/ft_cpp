/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:15:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/08 20:15:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie* zombie = newZombie("Foo");
	zombie->announce();
	delete zombie;

	Zombie zombieBro("Second");
	zombieBro.announce();

	randomChump("Haa");
	return (0);
}