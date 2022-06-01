/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:45:18 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/01 22:48:44 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void) {this->con_len = 0; return ;};
PhoneBook::~PhoneBook(void) {std::cout << "Quit PhoneBook." << std::endl; return ;};

void PhoneBook::add(void)
{
	int size = this->con_len;
	return ;
}

void PhoneBook::search(void)
{
	return ;
}

int main (void) {
	PhoneBook pb;

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