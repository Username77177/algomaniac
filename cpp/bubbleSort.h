#include <iostream>

int bubbleSort(int *array, int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой
int bubbleSortInverse(int *array, int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой (инверсия)
float bubbleSort(float *array, int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой
float bubbleSortInverse(float *array, int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой (инверсия)
double bubbleSort(double *array, int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой
double bubbleSortInverse(double *array, int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой (инверсия)

int bubbleSort(int *array, int arraySize)
{
	for (int i = 0; i < arraySize - 1; i++)
	{
		for (int j = 0; j < arraySize - i - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				swap(&array[j], &array[j+1]);
			}
		}
	}
}