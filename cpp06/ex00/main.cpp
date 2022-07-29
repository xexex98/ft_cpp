/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:04:48 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/30 02:21:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Conversion::Conversion()
{
	cout << "Default Constructor called!" << endl;
}

Conversion::Conversion(std::string s)
{
	this->s = s;
}

Conversion::~Conversion()
{
	cout << "Default Destructor called!" << endl;
}

void Conversion::toChar()
{

	if (this->getString()[0])
	{
	}
}

std::string Conversion::getString()
{
	return this->s;
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		cout << "Run as: -->| ./ex00 argv |<--" << endl;
		return -1;
	}

	Conversion *target = new Conversion(argv[1]);
	target->toChar();

	cout << typeid(std::stod(argv[1])).name() << endl;
	cout << typeid(std::stof(argv[1])).name() << endl;
	cout << typeid(std::stoi(argv[1])).name() << endl;

	delete target;
	return 0;
}
