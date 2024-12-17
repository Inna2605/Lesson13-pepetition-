/*4. Дано масив: А[M] (M вводиться з клавіатури). 
Необхідно видалити з масиву парні або непарні значення.
Користувач вводить дані в масив, а також за допомогою меню вирішує, що потрібно видалити.*/
#include<iostream>
#include "Zagalne.h"
#include "Zadacha1.h"
#include "Zadacha4.h"

void Dia_z_masuvom();
void Switch_diy(int n, int N, int A[]);
void Vudalenna_parnux_elementiv(int& N, int A[]);
int* Ne_parni_elementu(int &N, int A[]);
void Vudalenna_ne_parnux_elementiv(int& N, int A[]);
int* Parni_elementu(int& N, int A[]);

void Vudalenna_elementiv_z_masuva()
{
	int N, n = 0;
	std::cout << "Vvedite rozmir masuvy A: ";
	Vvod(N);
	int* A = new int[N];
	Masuv(N, A);
	std::cout << "Masuv A:\n";
	Show_masuv(N, A);
	Show('\n');
	while (n != 3) {
		Dia_z_masuvom();
		Vvod(n);
		Switch_diy(n, N, A);
	}
}

void Dia_z_masuvom()
{
	std::cout << "Oberite diy z masuvom:\n"
		<< "1. Vudalutu z masuvy parni znachenna\n"
		<< "2. Vudalutu z masuvy ne parni znachenna\n"
		<< "3. Vuxid\n";
}

void Switch_diy(int n, int N, int A[])
{
	switch (n) {
	case 1:Vudalenna_parnux_elementiv(N, A); break;
	case 2:Vudalenna_ne_parnux_elementiv(N, A); break;
	case 3:break;
	default:Default;
	}
}

void Vudalenna_parnux_elementiv(int& N, int A[])
{
	int* B = Ne_parni_elementu(N, A);
	std::cout << "Macuv z vudalenumu parnumu elementamu:\n";
	Show_masuv(N, B);
	Show('\n');
}

int* Ne_parni_elementu(int& N, int A[])
{
	int r = 0;
	int* B = nullptr;
	for (int i = 0; i < N; i++) {
		if (A[i] % 2 != 0 && r == 0) {
			r++;
			B = new int[r];
			B[r - 1] = A[i];
		}
		else if (A[i] % 2 != 0 && r != 0) {
			r++;
			int* C = new int[r];
			Kopiuvanna_masuvy(r - 1, B, C);
			C[r - 1] = A[i];
			delete[]B;
			B = C;
		}
	}
	N = r;
	return B;
}

void Vudalenna_ne_parnux_elementiv(int& N, int A[])
{
	int* B = Parni_elementu(N, A);
	std::cout << "Macuv z vudalenumu ne parnumu elementamu:\n";
	Show_masuv(N, B);
	Show('\n');
}

int* Parni_elementu(int& N, int A[])
{
	int r = 0;
	int* B = nullptr;
	for (int i = 0; i < N; i++) {
		if (A[i] % 2 == 0 && r == 0) {
			r++;
			B = new int[r];
			B[r - 1] = A[i];
		}
		else if (A[i] % 2 == 0 && r != 0) {
			r++;
			int* C = new int[r];
			Kopiuvanna_masuvy(r - 1, B, C);
			C[r - 1] = A[i];
			delete[]B;
			B = C;
		}
	}
	N = r;
	return B;
}
