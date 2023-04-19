#include "drobK.h"

// выводит меню 
void showMenu() {
	cout << "[+] - сложение" << endl;
	cout << "[-] - вычитание" << endl;
	cout << "[*] - умножение" << endl;
	cout << "[/] - деление" << endl;
	cout << "[1] - ввести новое число" << endl;
	cout << "[0] - выход" << endl;
}
// выводит меню после расчета
void showMenuMin() {
	cout << "[1] - продолжим" << endl;
	cout << "[0] - выход" << endl;
}

// проверка выбора варианта меню
char varMenu() {
	char var;
	cout << "Выберите вариант: ";
	while (true) {
		cin >> var;
		if (var == '+' || var == '-' || var == '*' || var == '/' || var == '1' || var == '0') {
			return var;
		}
		else {
			cout << "Неправильно. Повторите ввод: ";
			cin.clear();
			cin.ignore();
		}
	}
}

// проверка выбора варианта меню после расчета
char varMenuMin() {
	char var;
	cout << "Выберите вариант: ";
	while (true) {
		cin >> var;
		if (var == '1' || var == '0') {
			return var;
		}
		else {
			cout << "Неправильно. Повторите ввод: ";
			cin.clear();
			cin.ignore();
		}
	}
}

//проверка на ввод целых чисел
int DrobK::getInteger()
{
	int number;
	while (true)
	{
		if (!(cin >> number) || getchar() != '\n') {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		else return number;
		cout << "Необходимо ввести целое число. Повторите ввод: ";
	}
}

//ввод чисел
void DrobK::setNumber(int num) {
	cout << "Введите числитель: ";
	chis = getInteger();
	cout << "Введите знаменатель: ";
	snam = getInteger();
	cout << endl;
	cout << "Дробное число " << num << ": " << chis << "/" << snam << endl;
	cout << endl;
}

void DrobK::print(char var) {
	string strRes;
	if (var == '+') strRes = "Результат сложения: ";
	if (var == '-') strRes = "Результат вычитания: ";
	if (var == '*') strRes = "Результат умножения: ";
	if (var == '/') strRes = "Результат деления: ";
    //выделяем целую часть из дроби и выводим на экран
	if (chis > snam) {                             
		cout << strRes << chis / snam << " " << (chis - snam * (chis / snam)) << "/" << snam << endl;
	} else cout << strRes << chis << "/" << snam << endl;

}

