/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:07:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 19:40:46 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
# define __DOG__

#include "Animal.hpp"

class Dog : public Animal
{
protected:
	std::string type;

public:
	Dog( void );
	~Dog( void );
	Dog &operator=(const Dog & Dog);
	Dog(const Dog & Dog);	

	void makeSound( void );
};

#endif