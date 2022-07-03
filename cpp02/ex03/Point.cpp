/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:35:10 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/03 22:41:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) {
	// std::cout << "Default constructor called" << std::endl;
    this->x = 0;
    this->y = 0;
}


Point::Point(const float x, const float y) {
	this->x = x;
	this->y = y;
}

Point::Point( void ){
	// std::cout << "Destructor called" << std::endl;
}

Point::Point(const Point& point) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = point;
}

Point &Point::operator=(const Point& Point) {
	// std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}