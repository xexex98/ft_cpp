/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:53:04 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 19:55:18 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__
# define __ANIMAL__

# include <iostream>

# define RED  "\033[31m"
# define GREEN "\033[33;32m"
# define YELLOW "\033[33;33m"
# define BLUE "\033[33;34m"
# define MAGNETA "\033[33;35m"
# define CYAN "\033[33;36m"
# define DEFAULT "\033[33;0m"

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	~Animal(void);
	Animal &operator=(const Animal &Animal);
	Animal(const Animal & Animal);

	virtual void makeSound(void);
	std::string getType(void);
};

#endif