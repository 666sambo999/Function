#include <iostream>

using namespace std;
using  std :: cout;


#define tab "\t"; 
const int ROWS = 3; // Rows ���������� ����� 
const int COLS = 5; // Cows ���������� ��������� 

// ������� � ���������� ������� + ��������� ������
//----------------------------------------------------------------------------//
// �������� �-�
void FillRand(int arr[], const int n); // �������� �������
void FillRand(double arr[], const int n); 
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[], const int n); // �������� ������� ��� char
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[], const int n);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[], const int n);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);
double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(char arr[], const int n);
double AVG(char arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char MinValueIn(char arr[], const int n);
char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char MaxValueIn(char arr[], const int n);
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n, int number_of_shifts=0);
void ShiftLeft(double arr[], const int n, int number_of_shifts=0);

void ShiftRight(int arr[], const int n, int sdvg=0);
void ShiftRight(double arr[], const int n, int sdvg=0);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

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

	char TAB[ROWS][COLS]; // ���������� ��� ����
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
// ���������� ���������� ������� ���������� �������
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
	cout << endl;
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
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

// ����� ���������� ������� �� ����� 
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
// �����
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}return sum; 
	cout << endl; 
}	
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}return sum;
	cout << endl;
}
int Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	cout << endl;
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}return sum;
	cout << endl;
}
// C������ �������� 
double AVG(int arr[], const int n)
{
	return (double (Sum(arr, n)) / n);
}
double AVG(double arr[], const int n)
{
	return (double(Sum(arr, n)) / n);
}
double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return double(Sum(arr, ROWS,COLS)) / (ROWS*COLS);
}
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return double(Sum(arr, ROWS, COLS)) / (ROWS * COLS);
}
double AVG(char arr[], const int n)
{
	return (double(Sum(arr, n)) / n);
}
double AVG(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return double(Sum(arr, ROWS, COLS)) / (ROWS * COLS);
}
// ����������� �������� 
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
	cout << endl; 
}
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
	cout << endl;
}
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		
	}
	return min;
	cout << endl;
}
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}

	}
	return min;
	cout << endl;
}
char MinValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
	cout << endl;
}
char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}

	}
	return min;
	cout << endl;
}
// ������������ ��������
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max; 
	cout << endl;
}
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
	cout << endl;
}
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
	cout << endl;
}
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
	cout << endl;
}
char MaxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
	cout << endl;
}
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
	cout << endl;
}
// ����� �����
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
// ����� ������
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
// ���������� �������:
void Sort(int arr[], const int n)
{
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
void Sort(char arr[], const int n)
{
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