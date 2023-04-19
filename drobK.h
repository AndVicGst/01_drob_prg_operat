#pragma once
#include <iostream>
using namespace std;

class DrobK
{
private:
	int chis = 0;
	int snam = 1;
	int getInteger();  //�������� �� ���� ����� �����

public:
	void setNumber(int num);   //���� �����
	void print(char var);      //����� ����������

	DrobK(){}          
	DrobK(int chis_a, int snam_a) {    //����������� ��� ������ ����������
		if (chis_a % 2 == 0 && snam_a % 2 == 0) {  // ���� ��� ����� ������, �������� �� �������� �� 2
			while (chis_a % 2 == 0 && snam_a % 2 == 0) {
				chis_a /= 2;
				snam_a /= 2;
			}
		}
		if (chis_a % 3 == 0 && snam_a % 3 == 0)  // ���� ��� ����� ��������, �������� �� �������� �� 3
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
		if (drob1.snam == drob2.snam) {               //���� ����������� �����
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
		if (drob1.snam == drob2.snam) {                //���� ����������� �����
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

	void showMenu();    // ������� ���� 
	void showMenuMin(); // ������� ���� ����� �������
	char varMenu();     // �������� ������ �������� ����
	char varMenuMin();  // �������� ������ �������� ���� ����� �������
