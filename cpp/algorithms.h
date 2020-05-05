#include <iostream>

using namespace std;
// Bubble sort
void bubbleSort(
    int *array,
    int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой
void bubbleSortInverse(int *array,
                       int arraySize); // Функция, которая сортирует массив
                                       // пузырьковой сортировкой (инверсия)
void bubbleSort(
    float *array,
    int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой
void bubbleSortInverse(float *array,
                       int arraySize); // Функция, которая сортирует массив
                                       // пузырьковой сортировкой (инверсия)
void bubbleSort(
    double *array,
    int arraySize); // Функция, которая сортирует массив пузырьковой сортировкой
void bubbleSortInverse(double *array,
                       int arraySize); // Функция, которая сортирует массив
                                       // пузырьковой сортировкой (инверсия)

// Selection sort
void selectionSort(
    int *array, int arraySize); // Функция, которая сортирует массив выборкой
void selectionSortInverse(
    int *array, int arraySize); // Функция, которая сортирует массив выборкой
void selectionSort(
    float *array, int arraySize); // Функция, которая сортирует массив выборкой
void selectionSortInverse(
    float *array, int arraySize); // Функция, которая сортирует массив выборкой
void selectionSort(
    double *array,
    int arraySize); // Функция, которая сортирует массив выборкой
void selectionSortInverse(
    double *array,
    int arraySize); // Функция, которая сортирует массив выборкой

// Insertion sort
void insertionSort(int *array, int arraySize); // Сортировка массива вставками
void insertionSortInverse(int *array, int arraySize); // Сортировка массива вставками
void insertionSort(float *array, int arraySize); // Сортировка массива вставками
void insertionSortInverse(float *array, int arraySize); // Сортировка массива вставками
void insertionSort(double *array, int arraySize); // Сортировка массива вставками
void insertionSortInverse(double *array, int arraySize); // Сортировка массива вставками

void bubbleSort(int *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

void bubbleSortInverse(int *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] < array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

void bubbleSort(float *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

void bubbleSortInverse(float *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] < array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

void bubbleSort(double *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

void bubbleSortInverse(double *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] < array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

// Bubble sort
void selectionSort(int *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = i + 1; j < arraySize - 1; j++) {
      if (array[i] > array[j]) {
        swap(array[i], array[j]);
      }
    }
  }
}

void selectionSortInverse(int *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = i + 1; j < arraySize; j++) {
      if (array[i] < array[j]) {
        swap(array[i], array[j]);
      }
    }
  }
}

void selectionSort(float *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = i + 1; j < arraySize - 1; j++) {
      if (array[i] > array[j]) {
        swap(array[i], array[j]);
      }
    }
  }
}

void selectionSortInverse(float *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = i + 1; j < arraySize; j++) {
      if (array[i] < array[j]) {
        swap(array[i], array[j]);
      }
    }
  }
}

void selectionSort(double *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = i + 1; j < arraySize - 1; j++) {
      if (array[i] > array[j]) {
        swap(array[i], array[j]);
      }
    }
  }
}

void selectionSortInverse(double *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = i + 1; j < arraySize; j++) {
      if (array[i] < array[j]) {
        swap(array[i], array[j]);
      }
    }
  }
}


// Insertion Sort
void insertionSort(int *array, int arraySize)
{
	for (int i = 1; i < arraySize; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (array[i] < array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}

void insertionSortInverse(int *array, int arraySize)
{
for (int i = 1; i < arraySize; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (array[i] > array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}