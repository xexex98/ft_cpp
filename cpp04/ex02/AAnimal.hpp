/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:53:04 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/13 20:42:41 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL__
# define __AANIMAL__

# include <iostream>
# include "Brain.hpp"
# define RED  "\033[31m"
# define GREEN "\033[33;32m"
# define YELLOW "\033[33;33m"
# define BLUE "\033[33;34m"
# define MAGNETA "\033[33;35m"
# define CYAN "\033[33;36m"
# define DEFAULT "\033[33;0m"

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal(void);
	virtual ~AAnimal(void);
	AAnimal &operator=(const AAnimal &AAnimal);
	AAnimal(const AAnimal & AAnimal);

	 void makeSound(void) const;
	 std::string getType(void) const;
	 Brain *getBrain() const = 0;
};

#endif