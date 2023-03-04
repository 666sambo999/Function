#pragma once
#include "const.h"
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

void ShiftLeft(int arr[], const int n, int number_of_shifts = 0);
void ShiftLeft(double arr[], const int n, int number_of_shifts = 0);

void ShiftRight(int arr[], const int n, int sdvg = 0);
void ShiftRight(double arr[], const int n, int sdvg = 0);
