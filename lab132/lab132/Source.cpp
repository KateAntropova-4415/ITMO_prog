#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class human
{
private:
	string name;
	string surname;
	string lastname;
	virtual void getdata()
	{
		cout << "\n������� ��� : ";
		cin >> name;
		cout << "\n������� ������� : ";
		cin >> surname;
		cout << "\n������� �������� : ";
		cin >> lastname;
	}
	virtual void putdata()
	{
		cout << "\n���: " << name;
		cout << "\n�������: " << surname;
		cout << "\n��������: " << lastname;
	}
};
{
private:
	int scores[5];
public:
	void getdata()
	{
		human::getdata();
		cout << "������� ������ : ";
		cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
	}
	void putdata()
	{
		human::putdata();
		cout << "\n������� ����: " << (scores[0] + scores[1] + scores[2] + scores[3] + scores[4])/5;
	}
};
{
private:
	double time;
public:
	void getdata()
	{
		human::getdata();
		cout << "������� ���������� ����� ������������ : ";
		cin >> time;
	}
	void putdata()
	{
		human::putdata();
		cout << "\n���������� ����� ������������ : " << time;
	}
};
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	human* pubarr[100];
	char choice;
	do
	{
		cout << "\n������� ������ ��� �������� ��� ������� (s / t) ? ";
		cin >> choice;
		if (choice == 's')
			pubarr[n] = new student;
		else
			pubarr[n] = new teacher;
		pubarr[n++]->getdata();
		cout << "����������((� / n) ? ";
		cin >> choice;
	} while (choice == 'y');
		pubarr[j]->putdata(); //������� ������ � ����������
	cout << endl;
	return 0;
}