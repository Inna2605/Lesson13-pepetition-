/*2. Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру,
у якому потрібно зібрати елементи масивів A і B, які не є загальними для них, без повторень.*/
#include<iostream>
#include "Zadacha2.h"
#include "Zadacha1.h"

void Elementu_A_i_B_ne_zagalni_dla_nux()
{
	int N, M, P, R;
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
	int* C = Ne_vklucheni_elementu_A_v_B(P, N, M, A, B);
	std::cout << "Masuv C:\n";
	Show_masuv(P, C);
	int* D = Ne_vklucheni_elementu_A_v_B(R, M, N, B, A);
	std::cout << "Masuv B:\n";
	Show_masuv(R, D);
	int* K = Obednenna_masuviv(P, R, C, D);
	std::cout << "Masuv K:\n";
	Show_masuv((P+R), K);
}

int* Obednenna_masuviv(int& N, int& M, int A[], int B[])
{
	int* K = new int[N + M];
	for (int i = 0; i < N; i++) {
		K[i] = A[i];
	}
	for (int j = N; j < N + M; j++) {
		K[j] = B[j - N];
	}	
	return K;
}
