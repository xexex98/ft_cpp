/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:47:27 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/02 00:21:56 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include <iostream>
# include <fstream>
# include <string.h>
# include <iomanip>

# include "contact.hpp"
# define MAX_CON 2

class PhoneBook
{
	private:
		Contact contact[MAX_CON];
		int			contuct_nums;

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void add(void);
		void search(void);
		void dataOverflow(std::string str);
};

#endif