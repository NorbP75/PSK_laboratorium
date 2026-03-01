/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: norbe
 *
 * Created on 1 marca 2026, 12:56
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.14159265;

/*
 * 
 */
int main(int argc, char** argv) {
    double wynik, katStopnie;
    printf("Wpisz wartosc kata w stopniach [deg]: ");
    scanf("%lf", &katStopnie);
    wynik = sin(katStopnie * pi / 180);
    printf("sin(%5.21lf [deg]) = %5.31lf\n", katStopnie, wynik);
    getchar();
    return (EXIT_SUCCESS);
}

