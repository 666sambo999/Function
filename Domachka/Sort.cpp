#include "Sort.h"

// сортировка массива:
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
			for (int k = i; k < ROWS; k++) // перебирает строки 
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) // перебирает элемент
				{
					interation++;
					// выбранный элемент - arr[i][j] 
					//перебираймый элемент arr [k][l]
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
	cout << "Массив отсортирован за " << interation << "итераций\n";
}