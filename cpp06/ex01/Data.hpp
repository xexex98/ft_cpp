/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:47:47 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/02 00:00:34 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__DATA__)
#define __DATA__

#include <iostream>

class Data
{
private:
	unsigned int data;

public:
	Data();
	Data(unsigned int data);

	~Data();
	Data(Data const &data);
	Data &operator=(Data const &data);
	unsigned int getData() const;
};

Data::Data()
{
	this->data = 100;
}

Data::Data(unsigned int data)
{
	this->data = data;
}

Data::~Data()
{
}

Data &Data::operator=(Data const &data)
{
	this->data = data.getData();
	return *this;
}

Data::Data(Data const &data)
{
	this->data = data.getData();
	*this = data;
}

unsigned int Data::getData() const
{
	return this->data;
}
#endif // __DATA__
