/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:00:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/03 01:15:33 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__ARRAY__)
#define __ARRAY__

#include <string>
#include <iostream>
#include <exception>

template <class T>
class Array
{
private:
	T *arr;
	unsigned int n;

public:
	Array()
	{
		this->n = 0;
		this->arr = NULL;
	}

	Array(unsigned int n)
	{
		this->n = n;
		this->arr = new T[n]();
	}

	~Array()
	{
		if (this->arr)
		{
			delete[] this->arr;
		}
	}

	Array(Array const &arr)
	{
		this->n = arr.n;
		this->arr = arr.arr;
		*this = arr;
	}

	unsigned int getSize() const
	{
		return this->n;
	}

	Array &operator=(Array const &arr)
	{
		if (this == &arr)
		{
			return *this;
		}
		this->n = arr.getSize();
		this->arr = new T[n]();
		for (size_t i = 0; i < n; i++)
		{
			this->arr[i] = arr.arr[i];
		}
		return *this;
	}

	T &operator[](unsigned int const index) const
	{
		if (index < 0 || index >= this->n)
		{
			throw std::out_of_range("out_of_range");
		}
		return this->arr[index];
	}
};

#endif // __ARRAY__
