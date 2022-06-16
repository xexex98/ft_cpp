/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:27:15 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/15 19:27:15 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	
	if (argc != 2) {
		std::cout << "Pls 2 args!" << std::endl;
		return(-1);
	}

	Harl harl;

	harl.complain(argv[1]);

	return (0);
}