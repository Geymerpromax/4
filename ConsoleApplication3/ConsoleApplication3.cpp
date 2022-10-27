//Переписать в одномерный массив Х все элементы вещественного  массива Y[30], меньшие его последнего элемента
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
    double Y[30], X[30];
    int i, j = 0, num = 1;
    cout << "\tИсходный массив:\n\n";
    for (i = 0; i <= 29; ++i)
    {
        Y[i] = (-500 + (rand() % 5000)) * 0.01; //массив вещественных чисел с диапазоном от -5 до 50
       
        if (i % 6 == 0 and i != 0) //Выравниваем в столбики
        {
            cout << "\n";
        }
        cout << "\t" << Y[i] << "\t";
    }
    cout << "\n\n\tПоследний элемент: " << Y[29] << "\n";
    
    for (i = 0; i <= 29; ++i) 
    {
        if (Y[i] < Y[29]) 
        {
            X[j] = Y[i];
            j += 1;
        }  
    }
    cout << "\n\tМассив X:\n\n";
    for (i = 0; i <= 29; ++i)
    {
        if (i % 6 == 0 and i != 0)
        {
            cout << "\n";
        }
        cout << "\t" << X[i] << "\t";
    }
    
}