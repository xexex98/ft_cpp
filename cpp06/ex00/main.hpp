/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 00:55:50 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/30 02:14:58 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__MAIN__)
#define __MAIN__

#include <iostream>
#include <string>
#include <typeinfo>

using std::cout;
using std::endl;

class Conversion
{
private:
	std::string s;
	char c;
	int i;
	float f;
	double d;

public:
	Conversion();
	Conversion(std::string s);
	~Conversion();
	Conversion &operator=(Conversion const &obj);
	Conversion(Conversion const &obj);

	std::string getString();

	void toChar();
	void toInt();
	void toFloat();
	void toDouble();
};

Conversion &Conversion::operator=(Conversion const &obj)
{
	(void)obj;
	return *this;
}
Conversion::Conversion(Conversion const &obj)
{
	(void)obj;
}

#endif // __MAIN__
