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
    double F[60], max = -100, min = 100, average = 0;
    int i, imin = 0, imax = 0;


    cout << "\tИсходный массив:\n\n";
    for (i = 0; i <= 59; ++i)
    {
        F[i] = (-500 + (rand() % 5000)) * 0.01; //массив вещественных чисел с диапазоном от -5 до 50
        average += (F[i] / 60);
        if (i % 6 == 0 and i != 0)
        {
            cout << "\n";
        }
        cout << "\t" << F[i] << "\t";


    }
    cout << "\n\n\tCреднее арифметическое массива: " << average;
    cout << "\n\n\tНовый массив:\n\n";

    for (i = 0; i <= 59; ++i)
    {
        if (i % 2 == 0 and i != 0)
        {
            F[i] = average;
        }
        if (i % 6 == 0 and i != 0)
        {
            cout << "\n";
        }
        cout << "\t" << F[i] << "\t";
    }
    
}