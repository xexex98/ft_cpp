/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:05:39 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/25 22:50:34 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__
#define __CAT__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public virtual AAnimal
{
private:
	Brain *brain;

public:
	Cat(void);
	~Cat(void);
	Cat &operator=(const Cat &Cat);
	Cat(const Cat &Cat);

	void makeSound(void) const;
	Brain *getBrain(void) const;
};

#endif