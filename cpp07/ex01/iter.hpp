/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:00:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/03 00:17:29 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__ITER__)
#define __ITER__

#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void (*f)(T &))
{
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}
#endif // __ITER__
