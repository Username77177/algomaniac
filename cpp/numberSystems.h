#include <cmath>
#include <iostream>
#include <string>
// Файл в котором будут описываться функции, которые переводят числа с одной СС в другую
using namespace std;

template <typename oggy>
oggy anyIntToAnySystem(oggy decimal, int toSystem)
{
	int remainder = 0, mainPart = decimal;
  double floatPart = decimal - mainPart, result;

	// Main part
	for (int i = 0; mainPart > 0; i++)
	{
    // Для перевода 10 => n делим данное число на новую СС, пока число не будет равняться 0. Все остатки (от последнего к первому - и есть число)
		remainder += (mainPart % toSystem) * pow(10,i);
		mainPart /= toSystem;
	}

  result += remainder;

  // Float part
  if (floatPart != 0) {
    // Проверяем есть ли вообще дробная часть
    for (int i = 1; i <= 8; i++) {
      // Умножаем дробную часть на новую СС, покуда не добьемся точности (тут 8 итераций)
      floatPart *= toSystem;
      if (floatPart >= 1) {
        // Если дробная часть > 1, отнимаем целую часть а в результат добавляем 1 (очередь единицы среди нулей - номер итерации)
        floatPart -= int(floatPart);
        result += 1 * pow(10, -i);
      }
    }
  }
  return result;
}

template <typename oggy>
oggy binToOct(oggy binary) // 2 => 8
{
  // Разделяем число на две части: целая и дробная
  // Ищем остаток от целой части делением на 10^n
  // Если i+1 % 3 == 0 (следующая позиция делится на 3 нацело), то мы записываем данное число умноженное на 10^n
  //  
  // Если дробная часть != 0, то выполняем следующие действия:
  // Умножаем дробную часть на 10^n и если n > 1, то отнимаем 10^n-1 и возмводим в целое число, а также умножаем на 2^n
  // Если i+1 % 3 == 0 (следующая позиция делится на 3 нацело) то слаживаем все числа до следующего индекса

  int mainPart = int(binary); // Целая часть
  int resultMainPart = 0; float resultFloatPart = 0; // Результаты
  float floatPart = binary - mainPart; // Дробная часть
  int temp; // Временная переменная
  int n = 1; // Счётчик степеней 10-ки
  int n_out = 1; // Счётчик внешней 10-ки
  // Внутренняя нужна для того, чтобы доставать определённые числа без разряда (превращать числа в единицы)
  // Внешняя - для того, чтобы позиционировать каждое получившиеся от суммы 3 слагаемых число в исходном числе
  for (int i = 0; i < to_string(mainPart).length() + 1; i++) {
    if ((i + 1) % 3 != 0)
    {
      if (n > 1) temp += (mainPart * pow(10,n) - mainPart * pow(10, n - 1)) * pow(2,i);
      // TODO: В данном алгоритме числа должны делиться на 10^n с остатком. Их остаток возводится в 2^i и получается одно из 3 суммирующих членов. Деление с остатком не хочет работать
      else temp += mainPart % pow(10,1);
    }
    else {
      resultMainPart += temp * pow(10, n_out++);
      temp = 0;
    }
  }
}
