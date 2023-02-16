#include <iostream> 

using namespace std;

int Sum(int a, int b); // прототип функции (объ€вление функции - Function - Definition)
int Difference(int a, int b); // прототип 
int Product(int a, int b); // int c = 0 - параметр по умолчанию будет 
int Quotient(int a, int b);


void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	int c = Sum(a, b); // »спользование ф-и, (вызов) - Function call
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Difference(a, b) << endl; 
	 
	cout << a << "/" << b << "=" << Quotient(a, b) << endl; 
	
}

int Sum(int a, int b) // функци€  вызов ее, реализаци€ ф-и, (ќперделение ф-и - Function Definition)
	{
		int c = a + b; // c - переменна€ суммы a+b
		return c;
	}
int Difference(int a, int b)
	{
		return a - b; // возвращает разницу 
	}
int Product(int a, int b)
	{
		return a * b; // возвращает умножение 
	}
 int Quotient(int a, int b)
	{
		return a / b;
	}


