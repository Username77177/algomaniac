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

void fastSort(int *array, int arraySize); // Быстрая сортировка

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

//TODO
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

// Элементы, которые левее pivot должны быть меньше
// Элементы, которые правее pivot должны быть больше

// https://www.youtube.com/watch?v=MZaf_9IZCrc
// 1. Выбираем pivot (пусть это будет последний элемент)
// 2. Начинаем проходить по массиву и находим элемент, который меньше pivot
// 3. Инициализируем переменную, которая будет указывать на все элементы, что левее pivot
// 4. Меняем элементы. Теперь элемент, который меньше pivot будет первым. Инкрементируем переменную, дабы при следующем нахождении, элемент который будет найден будет стоять на 2 месте
// 5. Если цикл дошёл до конца, то инкрементируем переменную, и ставим pivot на данный индекс
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];
    for (int j = low; j < high; j++)  
    {  
        if (arr[j] < pivot)  
        {  
            swap(arr[low++], arr[j]);  
        }  
    }  
    swap(arr[low], arr[high]);  
    return (low);  
}  

void quickSort(int *arr, int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
