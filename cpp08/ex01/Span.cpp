/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:59:47 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/04 03:12:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->n = 0;
	this->arr = new std::vector<int>;
}

Span::Span(unsigned int n)
{
	this->n = n;
	this->arr = new std::vector<int>;
}

Span::~Span()
{
	delete this->arr;
}

Span::Span(Span const &span)
{
	this->n = span.n;
	this->arr = new std::vector<int>(span.arr->begin(), span.arr->end());
};

Span &Span::operator=(Span const &span)
{
	if (this != &span)
	{
		this->arr = span.arr;
		this->n = span.n;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (this->arr->size() < this->n)
	{
		this->arr->push_back(n);
	}
	else
	{
		throw Span::overpower();
	}
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		if (this->arr->size() == this->n)
		{
			throw Span::overpower();
		}
		this->arr->push_back(*begin);
		++begin;
	}
}

int Span::shortestSpan() const
{
	if (this->arr->size() < 2)
	{
		throw Span::overpower();
	}
	int min = 2147483647;
	std::sort(this->arr->begin(), this->arr->end());
	std::vector<int>::iterator it = this->arr->begin();

	for (; it + 1 != this->arr->end(); ++it)
	{
		if (*(it + 1) - *it < min)
		{
			min = *(it + 1) - *it;
		}
	}
	return min;
}

int Span::longestSpan() const
{
	if (this->arr->size() < 2)
	{
		throw Span::overpower();
	}
	int max = *std::max_element(this->arr->begin(), this->arr->end());
	int min = *std::min_element(this->arr->begin(), this->arr->end());
	return max - min;
}
