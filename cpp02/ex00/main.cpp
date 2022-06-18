/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:56:36 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/18 17:52:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	float i = 3.14;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(200);
	std::cout << i << std::endl;
	return (0);
}