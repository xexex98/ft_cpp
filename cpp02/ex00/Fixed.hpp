/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 18:56:01 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/18 19:29:45 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
# define __FIXED__

# include <iostream>

class Fixed
{
private:
	/* data */
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed){};
	Fixed& operator=(const Fixed& fixed){return *this;};
};

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}


#endif