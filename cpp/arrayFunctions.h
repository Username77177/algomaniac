#include <iostream>
#include <string>
#include <cstdlib>
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

void subArray(int *array, int arraySize, int fromIndex, int toIndex, int *resultArray); // Функция, которая возвращает подмассив

void fillArray(float array[], int arraySize); // Функция, которая заполняет массив [0;2]
void fillArray(int array[], int arraySize); // Функция, которая заполняет массив [-50;50]

// Show array
void showArray(int *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
  cout << endl;
}

void showArray(float *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
  cout << endl;
}

void showArray(double *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
  cout << endl;
}

void showArray(char *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
  cout << endl;
}

void showArray(string *array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << "\t";
	}
  cout << endl;
}

// Show array inverse
void showArrayInverse(string *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
  cout << endl;
}

void showArrayInverse(double *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
  cout << endl;
}

void showArrayInverse(float *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
  cout << "\n";
}

void showArrayInverse(char *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
  cout << "\n";
}

void showArrayInverse(int *array, int arraySize)
{
	for (int i = arraySize - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
  cout << "\n";
}

// Sub-array
void subArray(int *array, int arraySize, int fromIndex, int toIndex, int *resultArray)
{
	const int newArraySize = toIndex - fromIndex + 1;
	for (int i = 0; i < newArraySize; i++)
	{
		if (fromIndex > toIndex) break;
		resultArray[i] = array[fromIndex++];
	}
}

// Fill array
void fillArray(float array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++) {
		array[i] = float(random() % 41) / 10 - 2; // [0; 2]
	}
}

void fillArray(int array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = random()% 101 - 50;; // [0; 2]
	}
}
