/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:45:18 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/02 01:06:10 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void) {this->contuct_nums = 0; return ;};
PhoneBook::~PhoneBook(void) {std::cout << "Закрытие телефонной книги!" << std::endl; return ;};

void PhoneBook::add(void)
{
	int	index;
	std::string str;

	if (this->contuct_nums < MAX_CON + 1)
	{
		this->contuct_nums++;
		index = this->contuct_nums - 1;
	}
	else
		index = 0;
	std::cout << "Имя: " << std::endl;
	getline(std::cin, str);
	this->contact[index].setFirstName(str);
	std::cout << "Фамилия: " << std::endl;
	getline(std::cin, str);
	this->contact[index].setLastName(str);
	std::cout << "Ник: " << std::endl;
	getline(std::cin, str);
	this->contact[index].setNickName(str);
	std::cout << "Телефон: " << std::endl;
	getline(std::cin, str);
	this->contact[index].setPhone(str);
	std::cout << "Секрет: " << std::endl;
	getline(std::cin, str);
	this->contact[index].setDarkestSecret(str);
	return ;
}

void	PhoneBook::dataOverflow(std::string str)
{
	if (str.length() > 10)
	{
		str = str.insert(9, ".");
		str = str.substr(0, 10);
	}
	std::cout << "|" << std::setw(10) << std::setfill(' ') << str;
}
//TODO косяк был тут надо доделать
void PhoneBook::search(void)
{
	int index = 0;
	std::string line;

	std::cout << "|-------------------------------------------|" << std::endl;
  std::cout << "|  Индекс  |    Имя   |  Фамилия |   Ник    |" << std::endl;
  std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->contuct_nums; i++)
	{
		std::cout << "|" << std::setw(10) << std::setfill(' ') << i + 1;
		dataOverflow(this->contact[i].getFirstName());
		dataOverflow(this->contact[i].getLastName());
		dataOverflow(this->contact[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	if (!this->contuct_nums)
		return ;
	std::cout << "Введите индекс : ";
	std::getline(std::cin, line);
	index = atoi(line.c_str());
	if (index > this->contuct_nums || index <= 0)
	{
		std::cout << "Неправильный индекс." << std::endl;
		return ;
	}
	std::cout << "Имя: " << this->contact[index - 1].getFirstName() << std::endl;
	std::cout << "Фамилия: " << this->contact[index - 1].getLastName() << std::endl;	
	std::cout << "Ник: " << this->contact[index - 1].getNickName() << std::endl;	
	std::cout << "Телефон: " << this->contact[index - 1].getPhone() << std::endl;	
	std::cout << "Секрет: " << this->contact[index - 1].getDarkestSecret() << std::endl;		
	return ;
}

int main(void)
{
	PhoneBook pb;
	std::string option;
	
	std::cout << "______\nADD\nSEARCH\nEXIT\n------\n>>";
	while (getline(std::cin, option)) {
		if (!option.compare("EXIT"))
			return (0);
		else if (!option.compare("ADD"))
			pb.add();
		else if (!option.compare("SEARCH"))
			pb.search();
		std::cout << ">>";
	}
	return (0);
}