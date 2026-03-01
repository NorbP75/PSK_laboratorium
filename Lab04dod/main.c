/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: norbe
 *
 * Created on 1 marca 2026, 14:12
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265

float pKola(float R);
/*
 * 
 */
int main(int argc, char** argv) {
    float r1, r2, r3, Pole;
    printf("Podaj dlugosc promienia R: ");
    scanf("%f", &r1);
    r2 = r1 /2;
    r3 = r1 / 8;
    Pole = pKola(r1) - 6 * pKola(r3) - (2 * pKola(r2)- pKola(r2));
    printf("Pole = %f\n", Pole);
    return (EXIT_SUCCESS);
}

float pKola(float R){
    float wynik;
    wynik = pi * pow(R,2);
    return wynik;
}