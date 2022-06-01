/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:39:05 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/01 22:48:41 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include "phonebook.hpp"

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phone;
		std::string darkestSecret;

	public:
		Contact( void );
		~Contact( void );
		
		void setFirstName(void);
		void setLastName(void);
		void setNickName(void);
		void setPhone(void);
		void setDarkestSecret(void);

		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhone(void);
		std::string getDarkestSecret(void);
};

#endif