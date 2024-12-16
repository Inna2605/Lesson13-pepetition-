/*1. Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру,
у якому потрібно зібрати елементи масиву A, які не включаються до масиву B, без повторень.*/

#pragma once
#include "Zagalne.h"

void Elementu_A_ne_vklucheni_v_B();
int* Ne_vklucheni_elementu_A_v_B(int& P, int& N, int& M, int A[], int B[]);
void Kopiuvanna_masuvy(int P, int C[], int D[]);

