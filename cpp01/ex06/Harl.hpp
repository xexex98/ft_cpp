/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:28:46 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/15 19:28:46 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__

#include <iostream>

class Harl
{
private:
	void debug( void );
	void info( void );
	void waring( void );
	void error( void );
	
public:
	void complain( std::string level );
	Harl();
	~Harl();
};

typedef void (Harl::*f)(void);
#endif