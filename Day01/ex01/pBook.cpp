#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
// #include "phonebook.h"
#define MAX_CON 3
using namespace std;



class PhoneBook
{
	char contacts[8];
	public:
		string name;
		string mob;

	void add(string newName, string newMob)
	{
		string name;
		string mob;

		name = newName;
		mob = newMob;
	}
};


void PhoneBook::

int main (void) {

	setlocale(LC_ALL, "Russian");	
	PhoneBook phoneBook[MAX_CON];

	int choice = 0;

	char name[10];
	char lastname[10];
	char phone[10];
	char secret[10];
	int  size = 0;

	while (1) {
		cout<<"1.ADD\n";
		cout<<"2.SEARCH\n";
		cout<<"3.EXIT\n";
		cout<<"Вы выбрали: ";
		cin >> choice;
		switch(choice)
		{
			case 1 : 
				cout<<"Вы выбрали ADD." << endl;
				if (size < MAX_CON) {
					cout << "Введите имя: ";
					cin >> name;
					cout << "Введите номер: ";
					cin >> phone;
					cout << phoneBook[size].add(name, phone) << endl;
					cout << phoneBook[size].name << endl;
					size++;
				} 
				else {
					cout << "Книга переполнена! Будет переписан первый контакт" << endl;
				}
				break;
			case 2 :
				cout<<"Вы выбрали SEARCH." << endl;;
				if (size) {
					for (int i = 0; i < MAX_CON; i++) {
						phoneBook[0].show("12345", "123");
					}
				} else {
					cout << "PHONEBOOK IS EMPTY" << endl;
				}
				break;
			case 3 :
				cout<<"Выход!"<<endl;
				exit(1);
			default:
				cout<<"Нет такой опции!"<<endl;
				exit(1);
		}


	}
}