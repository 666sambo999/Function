#include <iostream>

using namespace std;
using  std :: cout;


#define tab "\t"; 
// ������� � ���������� ������� 
// �������� �-�
void FillRand(int arr[], const int n); // �������� �������
void FillRand(double arr[], const int n); 

void Print(int arr[], const int n);
void Print(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);

void ShiftLeft(int arr[], const int n, int number_of_shifts=0);
void ShiftLeft(double arr[], const int n, int number_of_shifts=0);

void ShiftRight(int arr[], const int n, int sdvg=0);
void ShiftRight(double arr[], const int n, int sdvg=0);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

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
	MaxValueIn(arr, n);
	cout << "������������ �������� �������: " << MaxValueIn(brr, Size) << endl;
}

// ��������� ����� ������� 
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
	cout << endl;
}

// ����� ������� 
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
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
double Sum(double arr[], const int n)
{
	double sum = 0;
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
double AVG(double arr[], const int n)
{
	return (double(Sum(arr, n)) / n);
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
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
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
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
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
void ShiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
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
void ShiftRight(double arr[], const int n, int sdvg)
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

void Sort(int arr[], const int n)
{
	// ���������� �������:
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
void Sort(double arr[], const int n)
{
	// ���������� �������:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
