/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:04:48 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/01 23:12:19 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
	cout << "Default Constructor called!" << endl;
}

Conversion::~Conversion()
{
	cout << "Default Destructor called!" << endl;
}

Conversion &Conversion::operator=(Conversion const &obj)
{
	(void)obj;
	return *this;
}

Conversion::Conversion(Conversion const &obj)
{
	(void)obj;
}

bool Conversion::isNum(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]) == false)
		{
			return false;
		}
	}
	return true;
}
