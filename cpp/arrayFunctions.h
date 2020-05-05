#include <iostream>
#include <string>

using namespace std;

void showArray(int *array, int arraySize); // Функция, которая выводит массив
void showArray(string *array, int arraySize); // Функция, которая выводит массив
void showArray(double *array, int arraySize); // Функция, которая выводит массив
void showArray(float *array, int arraySize); // Функция, которая выводит массив
void showArray(char *array, int arraySize); // Функция, которая выводит массив

void showArrayInverse(int *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(string *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(double *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(float *array, int arraySize); // Функция, которая выводит массив наоборот
void showArrayInverse(char *array, int arraySize); // Функция, которая выводит массив наоборот

int* subArray(int *array, int arraySize, int fromIndex, int toIndex); // Функция, которая возвращает подмассив

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

void showArrayInverse(string *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
}

void showArrayInverse(double *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
}

void showArrayInverse(float *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
}

void showArrayInverse(char *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
}

void showArrayInverse(int *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
}

int* subArray(int *array, int arraySize, int fromIndex, int toIndex, int *resultArray)
{
	const int newArraySize = toIndex - fromIndex + 1;
	for (int i = 0; i < newArraySize; i++)
	{
		if (fromIndex > toIndex) break;
		resultArray[i] = array[fromIndex++];
	}
	return resultArray;
}