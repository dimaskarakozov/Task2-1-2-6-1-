﻿// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int q, w, e, a, s, d;
    float z;
    float x[3], c[3]; // знаю не по теме,но для удобства сортировки

                                //прога #1
    printf("Task2( 1, 2, 3, 4, 5(1) )\n (0,5)  Известны год, номер месяца и день рождения каждого из двух человек. Определить, кто из них старше.");
    printf("\nВведите первую дату(день:месяц:год)-");
    scanf_s("%d:%d:%d", & q, & w, & e);

    printf("\nВведите вторую дату(день:месяц:год)-");
    scanf_s("%d:%d:%d", &a, &s, &d);
    if (e > d || (e == d && w > s) || (e == d && w == s && q > a))
    {
        printf("Второй старше");
   }
    else if (e == d && w == s && q == a) {
        printf("В один день родились");
    }
    else {
        printf("Первый старше");
    }





                                 //прога #2
    printf("\n\n\n\n(1) Даны числа x, y. Проверить истинность высказывания: «Точка с координатами (x, y) лежит в заштрихованной области».(Квадрат минус  ромб, квадрат минус круг и I четверть)");
    printf("\nВведите координаты точки(Vx:Vy): ");
    scanf_s("%d:%d", &q, &w);
    if ((q < 2) && (q > -2) && (w < 2) && (w > -2)) {


        if (
            (q < 2 - w) && (q > -2 + w) && (q > -2 - w) && (q < 2 + w)
            //находим формулу функций по значению их графиков
            )
        {
            printf("Точка не входит в первый рисунок\n");//определяем принадлежность
        }
        else {
            printf("Точка  входит в первый рисунок\n");
        };
        if (
            (q * q + w + w <= 4) || (q >= 0 && w >= 0)
            )
        {
            printf("Точка не входит во второй рисунок\n");
        }
        else {
            printf("Точка входит во второй рисунок\n");
        };
    }
    else {
        printf("Точка не входит в первый и во второй  рисунок\n");
    }
 
    /*
                           //прога #4
    printf("\n\n\n\n(1) Даны длины сторон двух треугольников. Определить подобны ли эти треугольники.");
    printf("\nВведите длину всех трех сторон первого треугольника (через пробел) ");
    scanf_s("%f",&x[0]);
    scanf_s("%f", &x[1]);
    scanf_s("%f", &x[2]);
    printf("\nВведите длину всех трех сторон второго треугольника (через пробел) ");
    scanf_s("%f", &c[0]);
    scanf_s("%f", &c[1]);
    scanf_s("%f", &c[2]);
    
    if (x[0] >= x[1] && x[0] >= x[2])
    {
        
    }
                    
    */
                 
                    



                            //прога #6-1
printf("\n\n\n\n(1) Дано целое число в диапазоне 20–69, определяющее возраст (в годах). Вывести строку-описание указанного возраста, обеспечив правильное согласование числа со словом «год», например: 20 — «двадцать лет», 32 —«тридцать два года», 41 — «сорок один год».");
printf("Введите число c 20-69 ");
scanf_s("%d", &q);
switch (q/10)
{
case 2: printf("двадцать ");
    break;
case 3: printf("тридцать ");
    break;
case 4: printf("сорок ");
    break;
case 5: printf("пятьдесят ");
    break;
case 6: printf("шестьдесят ");
    break;
}
switch (q % 10)
{
case 1: printf("один");
    break;
case 2: printf("два");
    break;
case 3: printf("три");
    break;
case 4: printf("четыре");
    break;
case 5: printf("пять");
    break;
case 6: printf("шесть");
    break;
case 7: printf("семь");
    break;
case 8: printf("восемь");
    break;
case 9: printf("девять");
    break;
}



    return 0;
}                                            //КОНЕЦ

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
