/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 18:56:01 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/18 20:33:29 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
# define __FIXED__

# include <iostream>

class Fixed
{
private:
	int number;
	static const int sci = 0;
public:
	Fixed();
	Fixed(const Fixed& fixed);
	~Fixed();
	Fixed & operator=(const Fixed& fixed);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif