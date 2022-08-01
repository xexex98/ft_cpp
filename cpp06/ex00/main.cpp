/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:43:42 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/01 23:15:47 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char const *argv[])
{
	Conversion f;
	if (argc != 2)
	{
		cout << "Run as: -->| ./ex00 argv |<--" << endl;
		return -1;
	}

	std::string input(argv[1]);
	double num = std::atof(input.data());

	if (f.isNum(input) == false && input.length() == 1)
	{
		num = static_cast<double>(argv[1][0]);
	}

	std::cout << "char: ";
	if ((input.length() > 1 && std::atoi(input.data()) == 0) || static_cast<char>(num) > std::numeric_limits<char>::max() ||
			static_cast<char>(num) < std::numeric_limits<char>::min())
	{
		cout << "impossible" << endl;
	}
	else if (static_cast<int>(num) < 32 || static_cast<int>(num) > 126)
	{
		cout << "Not displayable" << endl;
	}
	else
	{
		cout << static_cast<char>(num) << endl;
	}
	std::cout << "int: ";
	if ((input.length() > 1 && std::atoi(input.data()) == 0) ||
			std::numeric_limits<int>::min() > static_cast<int>(num) || std::numeric_limits<int>::max() < static_cast<int>(num))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;

	std::cout << "float: ";
	if (fmod(num, 1) == 0)
		std::cout << static_cast<float>(num) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(num) << "f" << std::endl;

	std::cout << "double: ";
	if (fmod(num, 1) == 0)
		std::cout << static_cast<double>(num) << ".0" << std::endl;
	else
		std::cout << static_cast<double>(num) << std::endl;

	return 0;
}
