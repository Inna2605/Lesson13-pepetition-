/*3. Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури). 
Необхідно створити третій масив мінімально можливого розміру, 
у якому потрібно зібрати елементи обох масивів.*/

#include<iostream>
#include "Zadacha3.h"
#include "Zadacha2.h"

void Masuv_z_elementamu_A_i_B()
{
	int N, M;
	std::cout << "Vvedite rozmiru masuviv A i B: ";
	Vvod(N);
	Vvod(M);
	int* A = new int[N];
	int* B = new int[M];
	Masuv(N, A);
	std::cout << "Masuv A:\n";
	Show_masuv(N, A);
	Masuv(M, B);
	std::cout << "Masuv B:\n";
	Show_masuv(M, B);
	int * C = Obednenna_masuviv(N, M, A, B);
	std::cout << "Masuv C:\n";
	Show_masuv((M+N), C);
}
