/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: norbe
 *
 * Created on 1 marca 2026, 13:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi = 3.14159265;
/*
 * 
 */
int main(int argc, char** argv) {
    float l, h, r, P, V;
    printf("Podaj tworzaca l: ");
    scanf("%f", &l);
    printf("Podaj wysokosc h: ");
    scanf("%f", &h);
    r = sqrt(pow(l,2) - pow(h,2));
    P = (pi*pow(r,2) + pi*l*r);
    V = ((pi * pow(r,2)*h)/3);
    printf("Pole = %f\n", P);
    printf("Objetosc = %f\n", V);
    getchar();
    return (EXIT_SUCCESS);
}

