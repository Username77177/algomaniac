#include <iostream>

using namespace std;

// Bubble sort
template <typename tempVar>
void bubbleSort(tempVar *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

template <typename tempVar>
void bubbleSortInverse(tempVar *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] < array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

// Selection Sort
template<typename var>
void selectionSort(var *array, int arraySize) {
  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = i + 1; j < arraySize - 1; j++) {
      if (array[i] > array[j]) {
        swap(array[i], array[j]);
      }
    }
  }
}

template<typename var>
void selectionSortInverse(var *array, int arraySize) {
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
template<typename var>
int partition (var arr[], int low, int high)  
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

template<typename var>
void quickSort(var *arr, int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
