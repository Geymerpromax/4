//Заменить первые 10 элементов заданного вещественного массива NN[33] на среднее арифметическое последних 10 элементов этого же массива 
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
    double NN[33], average = 0;
    int i;
    cout << "\tИсходный массив:\n\n";
    for (i = 0; i <= 32; ++i)
    {
        NN[i] = (-500 + (rand() % 5000)) * 0.01; //массив вещественных чисел с диапазоном от -5 до 50
        average += (NN[i] / 33);
        if (i % 6 == 0 and i != 0)
        {
            cout << "\n";
        }
        cout << "\t" << NN[i] << "\t";
    }
    cout << "\n\n\tCреднее арифметическое массива: " << average;
    cout << "\n\n\tНовый массив:\n\n";
    for (i = 0; i <= 32; ++i)
    {
        if (i >= 0 and i < 10)
        {
            NN[i] = average;
        }
        if (i % 6 == 0 and i != 0)
        {
            cout << "\n";
        }
        cout << "\t" << NN[i] << "\t";
    }
    
}