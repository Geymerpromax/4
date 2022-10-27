//Заменить все элементы с чётными номерами в вещественном массиве F[60] на значение среднего арифметического массива
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <random>
#include <initializer_list>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    double F[60], max = -100, min = 100;
    int i, imin = 0, imax = 0;
    
    
    cout << "Массив вещественных чисел с диапазоном от -5 до 50:\n";
    for (i = 0; i <= 59; ++i)
    {
        F[i] = (-500 + (rand() % 5000)) * 0.01;
        cout << F[i] << "\t-  " << i <<"\n";
        if (F[i] > max)
        {
            max = F[i];
            imax = i;
        }
        if (F[i] < min)
        {
            min = F[i];
            imin = i;
        }
    }
    cout << "Наименьшее число: " << min << " c индексом: " << imin << "\n";
    cout << "Наибольшее число: " << max << " c индексом: " << imax << "\n";
    
}