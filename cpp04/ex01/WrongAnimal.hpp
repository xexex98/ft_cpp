/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:53:04 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/10 21:26:38 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL__
# define __WRONGANIMAL__

# include <iostream>

# define RED  "\033[31m"
# define GREEN "\033[33;32m"
# define YELLOW "\033[33;33m"
# define BLUE "\033[33;34m"
# define MAGNETA "\033[33;35m"
# define CYAN "\033[33;36m"
# define DEFAULT "\033[33;0m"

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
	WrongAnimal(const WrongAnimal & WrongAnimal);

	void makeSound(void) const;
	std::string getType(void) const;
};

#endif