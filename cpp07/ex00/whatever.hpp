/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:29:33 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/02 23:58:56 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__WHATEVER__)
#define __WHATEVER__

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T t;
	t = a;
	a = b;
	b = t;
}

template <typename T>
T min(T &a, T &b)
{
	return a < b ? a : b;
}

template <typename T>
T max(T &a, T &b)
{
	return a > b ? a : b;
}

#endif // __WHATEVER__
