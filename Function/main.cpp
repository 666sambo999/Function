#include <iostream> 

using namespace std;

int Sum(int a, int b); // �������� ������� (���������� ������� - Function - Definition)
int Difference(int a, int b); // �������� 
int Product(int a, int b); // int c = 0 - �������� �� ��������� ����� 
int Quotient(int a, int b);


void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Sum(a, b); // ������������� �-�, (�����) - Function call
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Difference(a, b) << endl; 
	 
	cout << a << "/" << b << "=" << Quotient(a, b) << endl; 
	
}

int Sum(int a, int b) // �������  ����� ��, ���������� �-�, (����������� �-� - Function Definition)
	{
		int c = a + b; // c - ���������� ����� a+b
		return c;
	}
int Difference(int a, int b)
	{
		return a - b; // ���������� ������� 
	}
int Product(int a, int b)
	{
		return a * b; // ���������� ��������� 
	}
 int Quotient(int a, int b)
	{
		return a / b;
	}

