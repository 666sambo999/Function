#include <iostream>

using namespace std; 

#define tab "\t"; 

void FillRand(int arr[], const int n); // прототип функции
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	// Вызов функции
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	
	const int Size = 8;
	int brr[Size];
	FillRand(brr, Size);
	Print(brr, Size);
	Sort(brr, Size);
	Print(brr, Size);
	
}
// Реализация функции
void FillRand(int arr[], const int n)
{
	// Заполнение массива случайными чисами 
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	// Вывод массива на экран 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	// сортировка массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}