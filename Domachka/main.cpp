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

template <typename T>
void Print(T arr[], const int n);

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T Sum(T arr[], const int n);

template <typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
double AVG(T arr[], const int n);

template <typename T>
double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T MinValueIn(T arr[], const int n);

template <typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T MaxValueIn(T arr[], const int n);

template <typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void ShiftLeft(T arr[], const int n, int number_of_shifts=0);

template <typename T>
void ShiftRight(T arr[], const int n, int sdvg=0);

template <typename T>
void Sort(T arr[], const int n);

template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

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
	Sort(TAB, ROWS, COLS);
	Print(TAB, ROWS, COLS);

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
template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

// ����� ���������� ������� �� ����� 
template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
template <typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		 
	} 
	return sum;
	cout << endl; 
}
template <typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
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
template <typename T>
double AVG(T arr[], const int n)
{
	return (double (Sum(arr, n)) / n);
}

template <typename T>
double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return double(Sum(arr, ROWS,COLS)) / (ROWS*COLS);
}

// ����������� �������� 
template <typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
	cout << endl; 
}
template <typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
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
template <typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max; 
	cout << endl;
}
template <typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
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

//_____________________________________________________//
// ����� �����
template <typename T>
void ShiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
	cout << endl; 
}

// ����� ������
template <typename T>
void ShiftRight(T arr[], const int n, int sdvg)
{
	for (int i = 0; i < sdvg; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)	
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
	}
	cout << endl; 
}

//--------------------------------------------------------//
// ���������� �������:
template <typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int interation = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++) // ���������� ������ 
			{
				for (int l = k == i ? j + 1: 0; l < COLS; l++) // ���������� �������
				{
					interation++;
					// ��������� ������� - arr[i][j] 
					//������������ ������� arr [k][l]
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer; 
					} 
				}
			}
		}
	}
	cout << "������ ������������ �� " << interation << "��������\n";
}
	