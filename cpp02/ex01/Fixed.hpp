/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:41:03 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/18 22:06:32 by mbarra           ###   ########.fr       */
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
	Fixed();
	Fixed(const int cint);
	Fixed(const float cfloat);
	Fixed(const Fixed& fixed);
	~Fixed();
	Fixed & operator=(const Fixed& fixed);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int		toInt( void ) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
#endif