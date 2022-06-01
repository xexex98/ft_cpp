/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:45:18 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/02 00:09:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

using namespace std;

PhoneBook::PhoneBook(void) {this->contuct_nums = 0; return ;};
PhoneBook::~PhoneBook(void) {std::cout << "Quit PhoneBook." << std::endl; return ;};

void PhoneBook::add(void)
{
	int index = this->contuct_nums;
	
	cout << "Имя: " << endl;
	this->contact[index].setFirstName();
	cout << "Фамилия: " << endl;
	this->contact[index].setLastName();
	cout << "Ник: " << endl;
	this->contact[index].setNickName();
	cout << "Телефон: " << endl;
	this->contact[index].setPhone();
	cout << "Секрет: " << endl;
	this->contact[index].setDarkestSecret();
	this->contuct_nums++;
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

void PhoneBook::search(void)
{
	int index = 0;
	std::string line;

	std::cout << "|-------------------------------------------|" << std::endl;
  std::cout << "|  Индекс  |    Имя   |  Фамилия |   Ник    |" << std::endl;
  std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|" << std::setw(10) << std::setfill(' ') << i + 1;
		dataOverflow(this->contact[0].getFirstName());
		dataOverflow(this->contact[0].getLastName());
		dataOverflow(this->contact[0].getNickName());
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

int main (void) {
	PhoneBook pb;

	std::string a;

	// getline(std::cin, a);

	// cout << a << endl;
	pb.add();
	pb.add();

	pb.search();
	// int choice = 0;
	// while (1) {
	// 	cout<<"1.ADD\n";
	// 	cout<<"2.SEARCH\n";
	// 	cout<<"3.EXIT\n";
	// 	cout<<"Вы выбрали: ";
	// 	cin >> choice;
		
	// 	switch(choice)
	// 	{
	// 		case 1 : 
	// 			cout<<"Вы выбрали ADD." << endl;
	// 			if (size < MAX_CON) {
	// 				cout << "Введите имя: ";
	// 				cin >> name;
	// 				cout << "Введите номер: ";
	// 				cin >> phone;
	// 				// cout << phoneBook[size].add(name, phone) << endl;
	// 				// cout << phoneBook[size].name << endl;
	// 				size++;
	// 			} 
	// 			else {
	// 				cout << "Книга переполнена! Будет переписан первый контакт" << endl;
	// 			}
	// 			break;
	// 		case 2 :
	// 			cout<<"Вы выбрали SEARCH." << endl;;
	// 			if (size) {
	// 				for (int i = 0; i < MAX_CON; i++) {
	// 					// phoneBook[0].show("12345", "123");
	// 				}
	// 			} else {
	// 				cout << "PHONEBOOK IS EMPTY" << endl;
	// 			}
	// 			break;
	// 		case 3 :
	// 			cout<<"Выход!"<<endl;
	// 			exit(1);
	// 		default:
	// 			cout<<"Нет такой опции!"<<endl;
	// 			break;
	// 			// exit(1);
	// 	}


	// }
}