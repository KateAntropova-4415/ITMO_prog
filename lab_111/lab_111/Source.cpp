#include <iostream>
#include <Windows.h>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	// ����������� �� ���������
	Distance() : feet(0), inches(0.0) { }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getdist()
	{
		cout << "\n������� ����� ����� : ";
		cin >> feet;
		cout << "\n������� ����� ������ : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}
	Distance operator+ (Distance) const;
	Distance operator- (Distance) const;
};
	SetConsoleOutputCP(1251);
	dist1.showdist();
	dist2.showdist();
	dist3.showdist();
	dist4.showdist();
	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << "\ndist4 = ";
	dist4.showdist();
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}
{
	int f;
	float i;
	f = feet;
	i = inches;
	if (feet > d2.feet)
	{
		f = feet - d2.feet;
		i = inches - d2.inches;
		
	}
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}
