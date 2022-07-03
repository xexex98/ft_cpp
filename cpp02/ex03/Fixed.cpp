/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:41:06 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/03 22:38:33 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	// std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const int cint) {
	// std::cout << "Int constructor called" << std::endl;
	this->number = (cint * (1 << this->sci));
}

Fixed::Fixed(const float cfloat){
	// std::cout << "Float constructor called" << std::endl;
	this->number = std::round(cfloat * (1 << this->sci));
}

Fixed::Fixed(const Fixed& fixed) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}
 
Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& fixed) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->number = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	return this->number;
}

void Fixed::setRawBits( int const number ) {
	this->number = number;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(this->number) / (1 << this->sci);
}

int Fixed::toInt(void) const {
	return (this->number) / (1 << this->sci);
}

std::ostream &operator << (std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return out;
}

Fixed Fixed::operator * (const Fixed & a) {
	return this->toFloat() * a.toFloat();
}

Fixed Fixed::operator / (const Fixed & a) {
	return this->toFloat() / a.toFloat();
}

Fixed Fixed::operator + (const Fixed & a) {
	return this->toFloat() + a.toFloat();
}

Fixed Fixed::operator - (const Fixed & a) {
	return this->toFloat() - a.toFloat();
}

Fixed& Fixed::operator -- (void) {
	--this->number;
	return *this;
}

Fixed Fixed::operator -- (int) {
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed& Fixed::operator ++ (void) {
	++this->number;
	return *this;
}

Fixed Fixed::operator ++ (int) {
	Fixed temp = *this;
	++*this;
	return temp;
}

bool Fixed::operator > (const Fixed& a){
	if (this->number > a.number) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator < (const Fixed& a){
	if (this->number < a.number) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator >= (const Fixed& a){
	if (this->number >= a.number) {
		return true;
	} else {
		return false;
	}
}

bool Fixed::operator <= (const Fixed& a){
	if (this->number <= a.number) {
		return true;
	} else {
		return false;
	}
}

const Fixed & Fixed::max (const Fixed & a, const Fixed & b) {
	return ((a.number > b.number) ? a : b);
}

Fixed & Fixed::max (Fixed & a, Fixed & b) {
	return ((a.number > b.number) ? a : b);
}

const Fixed & Fixed::min (const Fixed & a, const Fixed & b) {
	return ((a.number < b.number) ? a : b);
}

Fixed & Fixed::min (Fixed & a, Fixed & b) {
	return ((a.number < b.number) ? a : b);
}