#include "Statistic.h"

// Сумма
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


// Cреднее значение 
template <typename T>
double AVG(T arr[], const int n)
{
	return (double(Sum(arr, n)) / n);
}

template <typename T>
double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return double(Sum(arr, ROWS, COLS)) / (ROWS * COLS);
}

// минимальное значение 
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


// максивальное значение
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
// сдвиг влево
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

// сдвиг вправо
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
