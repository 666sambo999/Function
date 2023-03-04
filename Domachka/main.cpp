#include "stdafx.h"
#include "const.h"
#include "FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistic.h"


//void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

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
	
	//========================================================//
	const int Size = 8;
	double brr[Size];
	FillRand(brr, Size);
	Print(brr, Size);
	Sort(brr, Size);
	Print(brr, Size);
	Sum(brr, Size);
	cout << "Сумма элементов массива: " << Sum(brr, Size) << endl;
	AVG(brr, Size);
	cout << "Средне-арифметическое элементов массива: " << AVG(brr, Size) << endl;
	MinValueIn(brr, Size);
	cout << "Минимальное значение массива: " << MinValueIn(brr, Size) << endl;
	MaxValueIn(brr, Size);
	cout << "Максимальное значение массива: " << MaxValueIn(brr, Size) << endl;
	
	//-------------------------------------------------------//
	// Двумерный массив
	int i_arr_2[ROWS][COLS];// i массив интовых элементов 
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sum(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	AVG(i_arr_2, ROWS, COLS);
	cout << "Средне-арифметическое элементов массива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	MinValueIn(i_arr_2, ROWS,COLS);
	cout << "Минимальное значение массива: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	MaxValueIn(i_arr_2, ROWS, COLS);
	cout << "Максимальное значение массива: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	double d_brr_2[ROWS][COLS]; // массив для дубля
	FillRand(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);
	Sum(d_brr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_brr_2, ROWS, COLS) << endl;
	AVG(d_brr_2, ROWS, COLS);
	cout << "Средне-арифметическое элементов массива: " << AVG(d_brr_2, ROWS, COLS) << endl;
	MinValueIn(d_brr_2, ROWS, COLS);
	cout << "Минимальное значение массива: " << MinValueIn(d_brr_2, ROWS, COLS) << endl;
	MaxValueIn(d_brr_2, ROWS, COLS);
	cout << "Максимальное значение массива: " << MaxValueIn(d_brr_2, ROWS, COLS) << endl;
	Sort(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);

	//для чаррр=====================================
	const int Value= 10; 
	char crr[Value];
	FillRand(crr, Value);
	Print(crr, Value);
	Sort(crr, Value);
	Print(crr, Value);
	Sum(crr, Value);
	cout << "Сумма элементов массива: " << Sum(crr, Value) << endl;
	AVG(crr, Value);
	cout << "Средне-арифметическое элементов массива: " << AVG(crr, Value) << endl;
	MinValueIn(crr, Value);
	cout << "Минимальное значение массива: " << MinValueIn(crr, Value) << endl;
	MaxValueIn(crr, Value);
	cout << "Максимальное значение массива: " << MaxValueIn(crr, Value) << endl;
	
	// двухмерник для чара
	char TAB[ROWS][COLS]; 
	FillRand(TAB, ROWS, COLS);
	Print(TAB, ROWS, COLS);
	Sum(TAB, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(TAB, ROWS, COLS) << endl;
	AVG(TAB, ROWS, COLS);
	cout << "Средне-арифметическое элементов массива: " << AVG(TAB, ROWS, COLS) << endl;
	MinValueIn(TAB, ROWS, COLS);
	cout << "Минимальное значение массива: " << MinValueIn(TAB, ROWS, COLS) << endl;
	MaxValueIn(TAB, ROWS, COLS);
	cout << "Максимальное значение массива: " << MaxValueIn(TAB, ROWS, COLS) << endl;
	Sort(TAB, ROWS, COLS);
	Print(TAB, ROWS, COLS);

}

