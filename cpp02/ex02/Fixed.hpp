/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:41:03 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/22 23:39:52 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
# define __FIXED__

# include <iostream>
# include <cmath>

class Fixed
{
private:
	static const int sci = 8;
public:
	int number;
	Fixed(); //Default constructor
	~Fixed();
	Fixed(const Fixed& fixed); //copy constructor
	Fixed & operator = (const Fixed& fixed); //copy assignment operator
	
	Fixed(const int cint);
	Fixed(const float cfloat);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed operator * (const Fixed & a);
	Fixed operator / (const Fixed & a);
	Fixed operator + (const Fixed & a);
	Fixed operator - (const Fixed & a);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
#endif