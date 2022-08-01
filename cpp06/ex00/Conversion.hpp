/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 00:55:50 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/01 23:09:41 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERSION__
#define __CONVERSION__

#include <iostream>
#include <string>
#include <typeinfo>
#include <limits>
#include <cmath>

using std::cout;
using std::endl;

class Conversion
{
public:
	Conversion();
	~Conversion();
	Conversion &operator=(Conversion const &obj);
	Conversion(Conversion const &obj);
	bool isNum(std::string str);
};

#endif // __CONVERSION__
