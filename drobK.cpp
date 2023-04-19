#include "drobK.h"

// ������� ���� 
void showMenu() {
	cout << "[+] - ��������" << endl;
	cout << "[-] - ���������" << endl;
	cout << "[*] - ���������" << endl;
	cout << "[/] - �������" << endl;
	cout << "[1] - ������ ����� �����" << endl;
	cout << "[0] - �����" << endl;
}
// ������� ���� ����� �������
void showMenuMin() {
	cout << "[1] - ���������" << endl;
	cout << "[0] - �����" << endl;
}

// �������� ������ �������� ����
char varMenu() {
	char var;
	cout << "�������� �������: ";
	while (true) {
		cin >> var;
		if (var == '+' || var == '-' || var == '*' || var == '/' || var == '1' || var == '0') {
			return var;
		}
		else {
			cout << "�����������. ��������� ����: ";
			cin.clear();
			cin.ignore();
		}
	}
}

// �������� ������ �������� ���� ����� �������
char varMenuMin() {
	char var;
	cout << "�������� �������: ";
	while (true) {
		cin >> var;
		if (var == '1' || var == '0') {
			return var;
		}
		else {
			cout << "�����������. ��������� ����: ";
			cin.clear();
			cin.ignore();
		}
	}
}

//�������� �� ���� ����� �����
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
		cout << "���������� ������ ����� �����. ��������� ����: ";
	}
}

//���� �����
void DrobK::setNumber(int num) {
	cout << "������� ���������: ";
	chis = getInteger();
	cout << "������� �����������: ";
	snam = getInteger();
	cout << endl;
	cout << "������� ����� " << num << ": " << chis << "/" << snam << endl;
	cout << endl;
}

void DrobK::print(char var) {
	string strRes;
	if (var == '+') strRes = "��������� ��������: ";
	if (var == '-') strRes = "��������� ���������: ";
	if (var == '*') strRes = "��������� ���������: ";
	if (var == '/') strRes = "��������� �������: ";
    //�������� ����� ����� �� ����� � ������� �� �����
	if (chis > snam) {                             
		cout << strRes << chis / snam << " " << (chis - snam * (chis / snam)) << "/" << snam << endl;
	} else cout << strRes << chis << "/" << snam << endl;

}

