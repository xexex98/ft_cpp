/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:13:55 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/04 03:16:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(11);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span sp = Span(6);
	try
	{
		int arr[] = {
				0,
				10,
				2,
				3,
				5,
				-7,
				1,
				2,
		};
		int n = sizeof(arr) / sizeof(arr[0]);

		std::vector<int> array(arr, arr + n);
		sp.addNumber(array.begin(), array.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}