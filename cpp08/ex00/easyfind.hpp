/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:32:59 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/03 23:45:07 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__EASYFIND__)
#define __EASYFIND__

#include <iostream>
#include <vector>
#include <algorithm>

class notFound : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return "Element Not Found!";
	}
};

template <typename T>
typename T::iterator easyfind(T &arr, int i)
{
	typename T::iterator iter = std::find(arr.begin(), arr.end(), i);
	if (iter == arr.end())
	{
		throw notFound();
	}
	return iter;
}

void add(int &elem)
{
	elem = std::rand() % 10;
}
#endif // __EASYFIND__
