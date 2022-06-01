/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:47:27 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/01 22:48:31 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include <iostream>
# include <fstream>
# include <string.h>
# include <iomanip>

# include "contact.hpp"
# define MAX_CON 3

class PhoneBook
{
	private:
		Contact con[MAX_CON];
		int			con_len;

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void add(void);
		void search(void);
};

#endif