#pragma once
#include"stdafx.h"
#include "const.h"

// Прототип ф-и
void FillRand(int arr[], const int n); // прототип функции
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[], const int n); // прототип функции для char
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);