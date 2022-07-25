/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 21:41:34 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/25 22:50:26 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; ++i)
	{
		switch ((std::rand()) % 7 + 1)
		{
		case 1:
		{
			this->ideas[i] = "cat?";
			break;
		}
		case 2:
		{
			this->ideas[i] = "dog?";
			break;
		}
		case 3:
		{
			this->ideas[i] = "cat or dog?";
			break;
		}
		case 4:
		{
			this->ideas[i] = "human?";
			break;
		}
		case 5:
		{
			this->ideas[i] = "CatDog?";
			break;
		}
		case 6:
		{
			this->ideas[i] = "alien?";
			break;
		}
		case 7:
		{
			this->ideas[i] = "hungry";
			break;
		}
		}
	}
	std::cout << GREEN "Brain " DEFAULT
			  << "Default Constructor called!" << std::endl;
};

Brain::~Brain(void)
{
	std::cout << RED "Brain " DEFAULT
			  << "Default Destructor called!" << std::endl;
};

Brain &Brain::operator=(const Brain &Brain)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = Brain.ideas[i];
	}
	std::cout << CYAN "Brain " DEFAULT
			  << "Copy assigment operator called!" << std::endl;

	return *this;
};

Brain::Brain(const Brain &Brain)
{
	std::cout << CYAN "Brain " DEFAULT
			  << "Copy constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = Brain.ideas[i];
	}
};

std::string Brain::getIdea(int i) const
{
	if (i > 0 && i < 100)
	{
		return this->ideas[i];
	}
	return this->ideas[0];
}