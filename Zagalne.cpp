/*1. Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру,
у якому потрібно зібрати елементи масиву A, які не включаються до масиву B, без повторень.
2. Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру,
у якому потрібно зібрати елементи масивів A і B, які не є загальними для них, без повторень.
3. Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру,
у якому потрібно зібрати елементи обох масивів.
4. Дано масив: А[M] (M вводиться з клавіатури).
Необхідно видалити з масиву парні або непарні значення.
Користувач вводить дані в масив, а також за допомогою меню вирішує, що потрібно видалити.*/

#include "Zagalne.h"
#include<iostream>

void Vubir_zadachi()
{
	std::cout << "Oberite zadachy:\n"
		<< "1. Elementu A ne vklucheni v B\n"
		<< "2. Elementu A i B ne zagalni dla nux\n"
		<< "3. Masuv z elementamu A i B\n"
		<< "4. Vudalenna elementiv z masuva\n"
		<< "5. Vuxid\n";
}

void Swich_zadach(int &a)
{
	switch (a) {
	case 1:Elementu_A_ne_vklucheni_v_B(); break;
	case 2:Elementu_A_i_B_ne_zagalni_dla_nux();break;
	case 3:/*Masuv_z_elementamu_A_i_B();*/break;
	case 4:/*Vudalenna_elementiv_z_masuva();*/break;
	case 5:break;
	}
}

void Masuv(int a, int A[])
{
	for (int i = 0; i < a; i++) {
		A[i] = rand() % 20 - 10;
	}
}

void Show_masuv(int a, int A[])
{
	for (int i = 0; i < a; i++) {
		Show(A[i]);
		Show(' ');
	}
	Show('\n');
}