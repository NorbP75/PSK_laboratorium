/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: norbe
 *
 * Created on 1 marca 2026, 13:48
 */

#include <stdio.h>
#include <stdlib.h>

float poleProstokata(float a, float b);

/*
 * 
 */
int main(int argc, char** argv) {
    float a, b, b1, PoleCalkowite, PoleZOtworem;
    printf("Podaj dlugosc a: ");
    scanf("%f", &a);
    printf("Podaj dlugosc b: ");
    scanf("%f", &b);
    printf("Podaj dlugosc b1: ");
    scanf("%f", &b1);
    PoleCalkowite = poleProstokata(a, b);
    printf("Pole calkowite = %.3f\n", PoleCalkowite);
    PoleZOtworem = PoleCalkowite - poleProstokata(b1, a/2);
    printf("Pole z otworem = %.3f\n", PoleZOtworem);
    return (EXIT_SUCCESS);
}

float poleProstokata(float a, float b) {
    float wynik;
    wynik = a * b;
    return wynik;
}