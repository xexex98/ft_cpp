/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:25:30 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/08 21:25:30 by mbarra           ###   ########.fr       */
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