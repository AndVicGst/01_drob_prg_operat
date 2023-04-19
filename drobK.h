#pragma once
#include <iostream>
using namespace std;

class DrobK
{
private:
	int chis = 0;
	int snam = 1;
	int getInteger();  //проверка на ввод целых чисел

public:
	void setNumber(int num);   //ввод чисел
	void print(char var);      //вывод результата

	DrobK(){}          
	DrobK(int chis_a, int snam_a) {    //конструктор для вывода результата
		if (chis_a % 2 == 0 && snam_a % 2 == 0) {  // если оба числа четные, упрощаем их делением на 2
			while (chis_a % 2 == 0 && snam_a % 2 == 0) {
				chis_a /= 2;
				snam_a /= 2;
			}
		}
		if (chis_a % 3 == 0 && snam_a % 3 == 0)  // если оба числа нечетные, упрощаем их делением на 3
		{
			while (chis_a % 3 == 0 && snam_a % 3 == 0) {
				chis_a /= 3;
				snam_a /= 3;
			}
		}
		chis = chis_a;
		snam = snam_a;
	}  

	friend DrobK operator+(const DrobK drob1, const DrobK drob2) {
		int chisSum = 0, snamSum = 0;
		if (drob1.snam == drob2.snam) {               //если знаменатели равны
			chisSum = drob1.chis + drob2.chis;
			snamSum = drob1.snam;
		}
		else {
			chisSum = drob1.chis * drob2.snam + drob2.chis * drob1.snam;
			snamSum = drob1.snam * drob2.snam;
		}
		return DrobK(chisSum, snamSum);
	};

	friend DrobK operator-(const DrobK drob1, const DrobK drob2) {
		int chisSum = 0, snamSum = 0;
		if (drob1.snam == drob2.snam) {                //если знаменатели равны
			chisSum = drob1.chis - drob2.chis;
			snamSum = drob1.snam;
		}
		else {
			chisSum = drob1.chis * drob2.snam - drob2.chis * drob1.snam;
			snamSum = drob1.snam * drob2.snam;
		}
		return DrobK(chisSum, snamSum);
	}

	friend DrobK operator*(const DrobK drob1, const DrobK drob2) {
		int chisSum = drob1.chis * drob2.chis;
		int snamSum = drob1.snam * drob2.snam;
		return DrobK(chisSum, snamSum);
	}

	friend DrobK operator/(const DrobK drob1, const DrobK drob2) {
		int chisSum = drob1.chis * drob2.snam;
		int snamSum = drob1.snam * drob2.chis;
		return DrobK(chisSum, snamSum);
	}

};

	void showMenu();    // выводит меню 
	void showMenuMin(); // выводит меню после расчета
	char varMenu();     // проверка выбора варианта меню
	char varMenuMin();  // проверка выбора варианта меню после расчета
