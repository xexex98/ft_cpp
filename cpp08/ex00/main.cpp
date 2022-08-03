/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:32:41 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/03 23:45:52 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	srand(time(NULL));
	std::vector<int> array(5);

	for_each(array.begin(), array.end(), add);

	for (size_t i = 0; i < array.size(); i++)
	{
		std::cout << array[i];
		i == array.size() - 1 ? std::cout << "\n" : std::cout << " ";
	};

	try
	{
		*easyfind(array, 3);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
