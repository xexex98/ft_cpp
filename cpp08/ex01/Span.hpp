/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:04:20 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/04 03:11:00 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <exception>
// #include <bits/stdc++.h>

class Span
{
private:
	unsigned int n;
	std::vector<int> *arr;

public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(Span const &span);
	Span &operator=(Span const &span);

	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan() const;
	int longestSpan() const;

	class overpower : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Overflow!";
		}
	};
};
