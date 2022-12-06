// lab_13.2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>
#include <conio.h>
#include <Cmath>
#define N 5 // директива препроцесора – макровизначення
#define CUB(x) (x)*(x)*(x)
#define ABS(x,y,z) abs(x) + abs(y) + abs(z)
#define SUM(x,y)  2*x + y
#define SQR(y,z)  (2*y - z)*(2*y - z)


// макрос визначення найбільшого з двох чисел
#define MAX(y,z) ((y)>(z))?(y):(z) // макрос як умовний вираз
#define MIN(y,z) ((y)<(z))?(y):(z)
// виведення повідомлення та значення цілого числа
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)
// використовується символ продовження макроса '\'
// символ '#' використовується для об’єднання рядків
// виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z, // змінні для розрахунків
		x_abs, // допоміжна змінна
		x_cub,
		maxim, // максимальне з трьох чисел
		minim,
		x_sum,
		x_kvadr;
	char ch; // відповідь чи продовжувати виконання програми
	do
	{
#if N<10 // якщо умова істинна,
		// то шукаємо максимум з трьох чисел
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		scanf_s("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
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
		maxim = MAX(x_cub, x_abs);// пошук максимуму з двох чисел
		maxim = MAX(maxim, z);
		minim = MIN(x_sum, x_kvadr);
		minim = MIN(minim, z);
		PRINTR(maxim); // макрос виведення результату
		PRINTR(minim);
#else // компілювати іншу частину програми, якщо N >= 10
		{
			puts("define area of a circle");
			puts("Input radius of circle");
			scanf("%f", &rad);
			s = SQCIRLE(rad);
			PRINTR(s);
		}
#endif // завершення блоку умовної компіляції
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
