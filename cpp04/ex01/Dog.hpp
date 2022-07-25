/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:07:26 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/25 22:48:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal
{
private:
	Brain *brain;

public:
	Dog(void);
	~Dog(void);
	Dog &operator=(const Dog &Dog);
	Dog(const Dog &Dog);

	void makeSound(void) const;
	Brain *getBrain(void) const;
};

#endif