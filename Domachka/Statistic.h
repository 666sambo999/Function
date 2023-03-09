#pragma once
#include "constant.h"
#include "stdafx.h"

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
void ShiftLeft(T arr[], const int n, int number_of_shifts = 0);

template <typename T>
void ShiftRight(T arr[], const int n, int sdvg = 0);
