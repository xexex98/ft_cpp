/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:41:03 by mbarra            #+#    #+#             */
/*   Updated: 2022/07/03 22:19:04 by mbarra           ###   ########.fr       */
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
	Fixed(); //Default constructor
	~Fixed(); //Default destructor
	Fixed(const Fixed& fixed); //Copy constructor
	Fixed & operator = (const Fixed& fixed); //Copy assignment operator
	
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
	
	Fixed& operator ++ (void);
	Fixed operator ++ (int);

	Fixed& operator -- (void);
	Fixed operator -- (int);

	bool operator > (const Fixed & a);
	bool operator >= (const Fixed & a);

	bool operator < (const Fixed & a);
	bool operator <= (const Fixed & a);

	bool operator == (const Fixed & a);
	bool operator != (const Fixed & a);

	static const Fixed & max (const Fixed & a, const Fixed & b);
	static Fixed & max (Fixed & a, Fixed & b);
	static const Fixed & min (const Fixed & a, const Fixed & b);
	static Fixed & min (Fixed & a, Fixed & b);

};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif