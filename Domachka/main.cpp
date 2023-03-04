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
	// ����� ��������� ������� 
	FillRand(arr, n);
	Print(arr, n);
	Sum(arr, n);
	cout << "����� ��������� �������: " << Sum(arr,n) << endl;
	//cout << "������-�������������� ��������� �������: " << double(Sum (arr,n)) / n << endl; // 2 �������, ������� �����
	cout << "������-�������������� ��������� �������: " << AVG(arr,n) << endl; 
	//�����������
	MinValueIn(arr, n);
	cout << "����������� �������� �������: " << MinValueIn (arr,n) << endl;
	// max
	MaxValueIn(arr, n);
	cout << "������������ �������� �������: " << MaxValueIn (arr,n) << endl;
	// ����� ����� 
	int number_of_shifts = 0;
	cout << "������� ���������� ������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	// ����� ������ 
	int sdvg=0;
	cout << "������� ���������� ������: "; cin >> sdvg;
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
	cout << "����� ��������� �������: " << Sum(brr, Size) << endl;
	AVG(brr, Size);
	cout << "������-�������������� ��������� �������: " << AVG(brr, Size) << endl;
	MinValueIn(brr, Size);
	cout << "����������� �������� �������: " << MinValueIn(brr, Size) << endl;
	MaxValueIn(brr, Size);
	cout << "������������ �������� �������: " << MaxValueIn(brr, Size) << endl;
	
	//-------------------------------------------------------//
	// ��������� ������
	int i_arr_2[ROWS][COLS];// i ������ ������� ��������� 
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sum(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	AVG(i_arr_2, ROWS, COLS);
	cout << "������-�������������� ��������� �������: " << AVG(i_arr_2, ROWS, COLS) << endl;
	MinValueIn(i_arr_2, ROWS,COLS);
	cout << "����������� �������� �������: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	MaxValueIn(i_arr_2, ROWS, COLS);
	cout << "������������ �������� �������: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	double d_brr_2[ROWS][COLS]; // ������ ��� �����
	FillRand(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);
	Sum(d_brr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_brr_2, ROWS, COLS) << endl;
	AVG(d_brr_2, ROWS, COLS);
	cout << "������-�������������� ��������� �������: " << AVG(d_brr_2, ROWS, COLS) << endl;
	MinValueIn(d_brr_2, ROWS, COLS);
	cout << "����������� �������� �������: " << MinValueIn(d_brr_2, ROWS, COLS) << endl;
	MaxValueIn(d_brr_2, ROWS, COLS);
	cout << "������������ �������� �������: " << MaxValueIn(d_brr_2, ROWS, COLS) << endl;
	Sort(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);

	//��� �����=====================================
	const int Value= 10; 
	char crr[Value];
	FillRand(crr, Value);
	Print(crr, Value);
	Sort(crr, Value);
	Print(crr, Value);
	Sum(crr, Value);
	cout << "����� ��������� �������: " << Sum(crr, Value) << endl;
	AVG(crr, Value);
	cout << "������-�������������� ��������� �������: " << AVG(crr, Value) << endl;
	MinValueIn(crr, Value);
	cout << "����������� �������� �������: " << MinValueIn(crr, Value) << endl;
	MaxValueIn(crr, Value);
	cout << "������������ �������� �������: " << MaxValueIn(crr, Value) << endl;
	
	// ���������� ��� ����
	char TAB[ROWS][COLS]; 
	FillRand(TAB, ROWS, COLS);
	Print(TAB, ROWS, COLS);
	Sum(TAB, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(TAB, ROWS, COLS) << endl;
	AVG(TAB, ROWS, COLS);
	cout << "������-�������������� ��������� �������: " << AVG(TAB, ROWS, COLS) << endl;
	MinValueIn(TAB, ROWS, COLS);
	cout << "����������� �������� �������: " << MinValueIn(TAB, ROWS, COLS) << endl;
	MaxValueIn(TAB, ROWS, COLS);
	cout << "������������ �������� �������: " << MaxValueIn(TAB, ROWS, COLS) << endl;
	Sort(TAB, ROWS, COLS);
	Print(TAB, ROWS, COLS);

}

