#include <iostream>

using namespace std;
using  std :: cout;


#define tab "\t"; 
const int ROWS = 3; // Rows количество строк 
const int COLS = 5; // Cows количество столбиков 

// Функция и перегрузка функции + двумерный массив
//----------------------------------------------------------------------------//
// Прототип ф-и
void FillRand(int arr[], const int n); // прототип функции
void FillRand(double arr[], const int n); 
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[], const int n); // прототип функции для char
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

	char TAB[ROWS][COLS]; // двухмерник для чара
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
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
	cout << endl;
}
// заполнение двумерного массива случайными числами
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
// Вывод массива 
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

// вывод двумерного массива на экран 
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
// Сумма
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
// Cреднее значение 
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
// минимальное значение 
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
// максивальное значение
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
// сдвиг влево
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
// сдвиг вправо
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
// сортировка массива:
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
	// сортировка массива:
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