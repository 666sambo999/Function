#include <iostream>

using namespace std;
using  std :: cout;


#define tab "\t"; 

// Прототип ф-и
void FillRand(int arr[], const int n); // прототип функции
void Print(int arr[], const int n);

int Sum(int arr[], const int n);
double AVG(int arr[], const int n);

int MinValueIn(int arr[], const int n);
int MaxValueIn(int arr[], const int n);

void ShiftLeft(int arr[], const int n, int number_of_shifts=0);
void ShiftRight(int arr[], const int n, int sdvg=0);
 
void main()
{
	setlocale(LC_ALL, "");
	
	const int n = 10;
	int arr[n];
	
	// Сумма элементов массива 
	FillRand(arr, n);
	Print(arr, n);
	Sum(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr,n) << endl;
	//cout << "Средне-арифметическое элементов массива: " << double(Sum (arr,n)) / n << endl; // 2 вариант, считает сразу
	cout << "Средне-арифметическое элементов массива: " << AVG(arr,n) << endl; 
	//Минимальное
	MinValueIn(arr, n);
	cout << "Минимальное значение массива: " << MinValueIn (arr,n) << endl;
	// max
	MaxValueIn(arr, n);
	cout << "Максимальное значение массива: " << MaxValueIn (arr,n) << endl;
	// сдвиг влево 
	int number_of_shifts = 0;
	cout << "Введите количество сдвига: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	
	// сдвиг вправо 
	int sdvg=0;
	cout << "Введите количество сдвига: "; cin >> sdvg;
	ShiftRight(arr, n, sdvg);
	Print(arr, n);
	
}

// Случайные числа массива 
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
}
// Вывод массива 
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		 
	} 
	return sum;
	cout << endl; 
}
double AVG(int arr[], const int n)
{
	return (double (Sum(arr, n)) / n);
}
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
	cout << endl; 
}
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max; 
	cout << endl;
}
void ShiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
	cout << endl; 
}
void ShiftRight(int arr[], const int n, int sdvg)
{
	for (int i = 0; i < sdvg; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)	
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}
	cout << endl; 
}