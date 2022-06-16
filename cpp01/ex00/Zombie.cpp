/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:25:43 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/08 21:25:43 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ){this->name = name;}

Zombie::~Zombie( void ){std::cout << this->name << ": died!" << std::endl;}

void Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}