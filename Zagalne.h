/*1. ���� ��� ������: �[M] � B[N] (M � N ��������� � ���������).
��������� �������� ����� ����� ��������� ��������� ������,
� ����� ������� ������ �������� ������ A, �� �� ����������� �� ������ B, ��� ���������.
2. ���� ��� ������: �[M] � B[N] (M � N ��������� � ���������).
��������� �������� ����� ����� ��������� ��������� ������,
� ����� ������� ������ �������� ������ A � B, �� �� � ���������� ��� ���, ��� ���������.
3. ���� ��� ������: �[M] � B[N] (M � N ��������� � ���������).
��������� �������� ����� ����� ��������� ��������� ������,
� ����� ������� ������ �������� ���� ������.
4. ���� �����: �[M] (M ��������� � ���������).
��������� �������� � ������ ����� ��� ������� ��������.
���������� ������� ���� � �����, � ����� �� ��������� ���� �����, �� ������� ��������.*/
#pragma once
#define Vvod(a)std::cin >> a;
#define Show(a)std::cout << a;
#define Default std::cout << "Ne virno obranuy variant";
#define Random srand(time(NULL));

#include "Zadacha1.h"
#include "Zadacha2.h"
#include "Zadacha3.h"
#include "Zadacha4.h"

void Vubir_zadachi();
void Swich_zadach(int &a);
void Masuv(int a, int A[]);
void Show_masuv(int a, int A[]);