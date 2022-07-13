/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 21:42:08 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/13 20:16:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__
# define __BRAIN__

#include <iostream>
#include <cstdlib>

# define RED  "\033[31m"
# define GREEN "\033[33;32m"
# define YELLOW "\033[33;33m"
# define BLUE "\033[33;34m"
# define MAGNETA "\033[33;35m"
# define CYAN "\033[33;36m"
# define DEFAULT "\033[33;0m"

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain & Brain);
	Brain & operator = (const Brain & Brain);

	std::string getIdea(int i) const;

};

#endif