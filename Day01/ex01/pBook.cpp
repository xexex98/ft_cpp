#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
// #include "phonebook.h"
#define MAX_CON 3
using namespace std;

class Contact
{
	public:
		string firstName;
		string lastName;
		string nickName;
		string phone;
		string darkestSecret;
};

class PhoneBook
{
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void add(void);
		void search(void);
		Contact con[MAX_CON];
		int			con_len;

	private:
};

PhoneBook::PhoneBook(void) {this->con_len = 0;};
PhoneBook::~PhoneBook(void) { };

void PhoneBook::add(void)
{
	int size = this->con_len;
	cout << "Введите Имя: " << endl;
	cin >> this->con[this->con_len].firstName;
	cout << "Введите Фамилию: " << endl;
	cin >> this->con[this->con_len].lastName;
	this->con_len++;

}

// даю данные
// добавить данные и записать в класс контакт, который передать в класс телефонна книга
// void PhoneBook::
// ~
int main (void) {


	PhoneBook pb;

	cout << pb.con_len << endl;
	pb.add();
	cout << pb.con_len << endl;
	
	
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