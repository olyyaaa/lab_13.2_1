// lab_13.2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>
#include <conio.h>
#include <Cmath>
#define N 5 // ��������� ������������ � ���������������
#define CUB(x) (x)*(x)*(x)
#define ABS(x,y,z) abs(x) + abs(y) + abs(z)
#define SUM(x,y)  2*x + y
#define SQR(y,z)  (2*y - z)*(2*y - z)


// ������ ���������� ���������� � ���� �����
#define MAX(y,z) ((y)>(z))?(y):(z) // ������ �� ������� �����
#define MIN(y,z) ((y)<(z))?(y):(z)
// ��������� ����������� �� �������� ������ �����
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)
// ��������������� ������ ����������� ������� '\'
// ������ '#' ��������������� ��� �ᒺ������ �����
// ��������� ����������� �� �������� ������� �����
#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z, // ���� ��� ����������
		x_abs, // �������� �����
		x_cub,
		maxim, // ����������� � ����� �����
		minim,
		x_sum,
		x_kvadr;
	char ch; // ������� �� ������������ ��������� ��������
	do
	{
#if N<10 // ���� ����� �������,
		// �� ������ �������� � ����� �����
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		scanf_s("%d", &x);// �������� �����
		PRINTI(x); // ������ ��������� �����
		scanf_s("%d", &y);
		PRINTI(y);
		scanf_s("%d", &z);
		PRINTI(z);
		x_cub = CUB(x);
		x_sum = SUM(x, y);
		x_abs = ABS(x, y, z);
		x_kvadr = SQR(y, z);
		PRINTI(x_cub);
		PRINTI(x_sum);
		PRINTI(x_abs);
		PRINTI(x_kvadr);
		maxim = MAX(x_cub, x_abs);// ����� ��������� � ���� �����
		maxim = MAX(maxim, z);
		minim = MIN(x_sum, x_kvadr);
		minim = MIN(minim, z);
		PRINTR(maxim); // ������ ��������� ����������
		PRINTR(minim);
#else // ���������� ���� ������� ��������, ���� N >= 10
		{
			puts("define area of a circle");
			puts("Input radius of circle");
			scanf("%f", &rad);
			s = SQCIRLE(rad);
			PRINTR(s);
		}
#endif // ���������� ����� ������ ���������
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
