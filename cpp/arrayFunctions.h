#include <iostream>
#include <string>

using namespace std;

void showArray(int *array, int arraySize); // Функция, которая выводит массив
void showArray(string *array, int arraySize); // Функция, которая выводит массив
void showArray(double *array, int arraySize); // Функция, которая выводит массив
void showArray(float *array, int arraySize); // Функция, которая выводит массив
void showArray(char *array, int arraySize); // Функция, которая выводит массив
// TODO
void showArrayInverse(int *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(string *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(double *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(float *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(char *array, int arraySize); // Функция, которая выводит массив наоборот

void showArray(int *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
}

void showArray(float *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
}

void showArray(double *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
}

void showArray(char *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
}

void showArray(string *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
}