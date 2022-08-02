/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:01:53 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/03 00:25:54 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void f(T &s)
{
	std::cout << s + 1 << " ";
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;

	int intArray[] = {-10, 20, 3};
	iter(intArray, sizeof(intArray) / sizeof(int), f);

	std::cout << std::endl;

	double doubleArray[] = {0.3, 45.3, -76.7, 88.55};
	iter(doubleArray, sizeof(doubleArray) / sizeof(double), f);

	std::cout << std::endl;

	// std::string stringArray[] = {"Hello", "Every", "Body"};
	// iter(stringArray, sizeof(stringArray) / sizeof(std::string), f);
	// std::cout << std::endl;

	return 0;
}
