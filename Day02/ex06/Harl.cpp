/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:24:49 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/15 20:24:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::waring( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
	f func[4] = {&Harl::debug,
							&Harl::info,
							&Harl::waring,
							&Harl::error,
							};
	std::string levels[4] = {"debug",
							"info",
							"warning",
							"error",
							};
	int depth = 0;
	while (level != levels[depth] && depth < 4){
		depth++;
		if (depth == 4) {
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			return ;
		}
	}
	while(depth < 4)
	{
			((this)->*func[depth])();
			depth++;
	}
}

