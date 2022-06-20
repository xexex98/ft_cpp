/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:41:03 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/20 21:34:45 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
# define __FIXED__

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int number;
	static const int sci = 8;
public:
	int i;
	// Fixed(); //Default constructor
	Fixed(const int cint);
	Fixed(const float cfloat);
	Fixed(const Fixed& fixed); //copy constructor
	// Fixed(Fixed& f * Fixed& i);
	~Fixed();
	Fixed & operator = (const Fixed& fixed); //copy assignment operator
	Fixed & operator * (const Fixed& fixed) const;
	Fixed(): i(0){}
	Fixed operator ++ (void){ ++i; ++i; ++i; return i;};
	// FI
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int		toInt( void ) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
#endif