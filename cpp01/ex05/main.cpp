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

int main(void){
	
	Harl harl;

	harl.complain("error");
	harl.complain("warning");
	harl.complain("debug");
	harl.complain("info");

	return (0);
}