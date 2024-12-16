/*1. Дано два масиви: А[N] і B[M] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру,
у якому потрібно зібрати елементи масиву A, які не включаються до масиву B, без повторень.*/

#include<iostream>
#include "Zagalne.h"
#include "Zadacha1.h"

void Elementu_A_ne_vklucheni_v_B()
{
	int N, M, P;
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
	int* C  = Ne_vklucheni_elementu_A_v_B(P, N, M, A, B);
	std::cout << "Masuv C:\n";
	Show_masuv(P, C);
}

int* Ne_vklucheni_elementu_A_v_B(int& P, int& N, int& M, int A[], int B[])
{
	P = 0;
	int r;
	int* C = nullptr;
	for (int i = 0; i < N; i++) {
		r = 0;
		for (int j = 0; j < M; j++) {
			if (A[i] == B[j]) {
				r++;
				break;
			}
		}
		if (r == 0 && P == 0) {
			P++;
			C = new int[P];
			C[P - 1] = A[i];
		}
		else if (r == 0 && P != 0) {
			for (int h = 0; h < P; h++) {
				if (C[h] == A[i]) {
					r++;
		
				}
			}
			if (r == 0) {
				P++;
				int* D = new int[P];
				Kopiuvanna_masuvy(P - 1, C, D);
				D[P - 1] = A[i];
				delete[]C;
				C = D;
			}
		}
	}
	return C;
}

void Kopiuvanna_masuvy(int P, int C[], int D[])
{
	for (int i = 0; i < P; i++) {
		D[i] = C[i];
	}
}