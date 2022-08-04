/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 23:13:42 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/05 00:42:16 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__MUTANTSTACK__)
#define __MUTANTSTACK__

#include <stack>
#include <vector>
#include <iostream>
#include <string>

template <typename T, class Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T, Container>(){};
	~MutantStack(){};
	MutantStack(MutantStack const &cpy) : std::stack<T, Container>()
	{
		*this = cpy;
	};
	MutantStack & operator=(MutantStack const &cpy)
	{
		this->c = cpy->c;
		return *this;
	};

	typedef typename MutantStack::container_type::iterator iterator;

	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif // __MUTANTSTACK__
