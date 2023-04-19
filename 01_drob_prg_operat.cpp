/*
Создайте класс Дробь (или используйте уже ранее создан-
ный вами). Используя перегрузку операторов реализуйте
для него арифметические операции для работы с дробями
(операции +, -, *, /).
*/

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "drobK.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	DrobK drob1;    //первое число
	DrobK drob2;    //второе число
	DrobK drob_res; //результат
	char choice;    //переменная хранит выбор пункта меню
	while (true) {
		system("cls");
		cout << "--------Математические опрации с дробями-----------" << endl << endl;
		drob1.setNumber(1);  //вводим первое число
		drob2.setNumber(2);  //вводим второе число

		showMenu();         //показать меню
		choice = varMenu(); //выбор пункта меню

		if (choice == '+') {    //расчет суммы
			cout << endl;
			drob_res = drob1 + drob2;
			drob_res.print(choice);
			showMenuMin();                       //показать меню после расчета
			if (varMenuMin() == '1') continue;   //выбор пукнта меню после расчета
			else break;
		}
		else if (choice == '-') {  //расчет вычитания
			cout << endl;
			drob_res = drob1 - drob2;
			drob_res.print(choice);
			showMenuMin();                       //показать меню после расчета
			if (varMenuMin() == '1') continue;   //выбор пукнта меню после расчета
			else break;
		}
		else if (choice == '*') {  //расчет произведения
			cout << endl;
			drob_res = drob1 * drob2;
			drob_res.print(choice);
			showMenuMin();                       //показать меню после расчета
			if (varMenuMin() == '1') continue;   //выбор пукнта меню после расчета
			else break;
		}
		else if (choice == '/') {  //расчет деления
			cout << endl;
			drob_res = drob1 / drob2;
			drob_res.print(choice);
			showMenuMin();                       //показать меню после расчета
			if (varMenuMin() == '1') continue;   //выбор пукнта меню после расчета
			else break;
		}
		else if (choice == '1') {
			continue;
		}
		else if (choice == '0') break;
	}
	cout << endl;
	system("pause");
	return 0;


}

