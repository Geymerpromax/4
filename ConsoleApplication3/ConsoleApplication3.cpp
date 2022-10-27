#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    /*
    float X[7][8], max = -100;
    int  i, nom_str, nom_stb, j;
    cout << "МАТРИЦА:\n";
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            X[i][j] = -10 + rand() % 50;
            cout << X[i][j] << " ";
            if (X[i][j] > max)
            {
                max = X[i][j];
                nom_str = i;
                nom_stb = j;
            }
            cout << "\n";
        }
        cout << "\nМаксимальное значение = " << max;
        cout << "\nНомер строки = " << nom_str;
        cout << "\nНомер столбца = " << nom_stb << "\n\n";


    }
    */
    /*
    int F[5][5], i, j, Sum = 0;
    cout << "\nМАТРИЦА F:\n";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            F[i][j] = -10 + rand() % 50;
            if (i == j)
            {
                Sum += F[i][j];
            }
            cout << F[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nСреднее арифметическое = " << Sum / 5.;
    */
    /*
    int  s[9][6], i, j, Pr;
    cout << "\nИСХОДНАЯ МАТРИЦА S:\n";
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            s[i][j] = -10 + rand() % 50;
            cout << s[i][j] << "\t";
        }
       cout << "\n";
    }
    for (i = 0; i < 9; i++)
    {
        Pr = 1;
        for (j = 0; j < 5; j++)
        {
            if (s[i][j] % 2 == 0)
            {
                Pr *= s[i][j];
            }
        }
        s[i][5] = Pr;
    }
   cout << "\nИЗМЕНЁННЫЙ МАССИВ S:\n\n";
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << s[i][j] << "\t";
        }
       cout << "\n";
    }
    */
    //Рассчитать среднее арифметическое элементов, расположенных выше главной диагонали вещественной матрицы Y[9][9]
    /*
    float Y[9][9], average = 0;
    int i, j, num = 0;
    cout << "\n\tИСХОДНАЯ МАТРИЦА Y:\n";
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            Y[i][j] = rand() % 10;
            cout << setprecision(3) << setw(8) << Y[i][j];
        }
        cout << endl;
    }
    cout << "\n\t*************************************\n";
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i <= j)
            {
                average += Y[i][j];
                num += 1;
            }
        }
    }
    cout << "\t" << "Среднее арифметическое: " << average / num << endl;
    */
    //Задание 2
}