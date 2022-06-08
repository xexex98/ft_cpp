/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:30:50 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/08 21:30:50 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void ){}

Zombie::~Zombie( void ){}

void Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
