/*
**********  Third task on C++ course                                         ****
**********  Filename >main.cpp                                               ****
**********  IDE > QT Creator 4.13.2||CodeBlocks 20.03 + GCC 10.2.0           ****
**********  Created by > "~ORDA~" , Anton Bondarenko                         ****
**********  Date 24.03.2021                                                  ****
*/


//DONE● Написать программу, проверяющую что сумма двух (введенных с клавиатуры) чисел лежит в пределах от 10 до 20 (включительно), если да – вывести строку "true", в противном случае – "false";
//DONE●Написать программу, выводящую на экран строку “true”, если две целочисленные константы, объявленные в её начале либо обе равны десяти сами по себе, либо их сумма равна десяти. Иначе "false".
//DONE●Написать программу которая выводит на экран список всех нечетных чисел он 1 до 50. Например: "Your numbers: 1 3 5 7 9 11 13 …". Для решения используйте любой С++ цикл.
//●Со звёздочкой. Написать программу, проверяющую, является ли некоторое число - простым. Простое число — это целое положительное число, которое делится без остатка только на единицу и себя само.
//DONE●Со звёздочкой. Пользователь вводит с клавиатуры число (год): от 1 до 3000. Написать программу, которая определяет является ли этот год високосным.
//     Каждый 4-й год является високосным, кроме каждого 100-го, при этом каждый 400-й – високосный. Вывести результаты работы программы в консоль. Замечание: Можно сделать в одном проекте (например разместить разные задания в разных функциях). Или в разных проектах если это кажется удобнее.

#include "main.h"



extern int year;

int main()
{

    Task1_func();
    std::cout<<"\nTASK2 in process\n";
     Task2_func(a,b);
     std::cout<<"\n";
     Task2_func(c,d);
     std::cout<<"\n";
     Task2_func(e,f);
     std::cout<<"\n";
     Task2_func(g,h);
     std::cout<<"\n";
     Task3_func();
     Task4_func();
     Task5_func();
 //***********************************************
 //        int i;
 //         for (i=0;i<=3000;i=i+4)
 //         {
 //           year=i;                              // If we need to check we can uncomment this cycle and  chek years every 4 from 0 to 3000   (0.4.8.12.16.....100.....400....3000)
 //           Task4_func();                        // also we can chage i=i+4 into i++ but in this case better to reduse max into 500, and check with intervals 0...500, 501....1000 and so on.
 //           }
//************************************************
    return 0;
}
