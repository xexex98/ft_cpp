/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:20:22 by mbarra            #+#    #+#             */
/*   Updated: 2022/08/02 00:00:30 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;

	Data *d = new Data(10011100);

	std::cout << d << std::endl;
	std::cout << d->getData() << std::endl;

	uintptr_t mem = serialize(d);
	std::cout << &mem << std::endl;
	std::cout << mem << std::endl;

	Data *out = deserialize(mem);
	std::cout << out << std::endl;
	std::cout << out->getData() << std::endl;

	delete d;
	return 0;
}
