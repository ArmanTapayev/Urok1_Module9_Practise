//#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include "Header.h"



void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int n, exitt;

	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &n);

		switch (n)
		{
			//case 1:
			//{
			//	/**/
			//	int countEl = 0;
			//	scanf("%d", &countEl);

			//	double *one = (double*)malloc(sizeof(double)*countEl);
			//	if (one == NULL)
			//	{
			//		printf("Память не выделена");
			//		//exit(0);
			//	}
			//	else
			//	{

			//	}
			//	free(one);

			//	/*---------------------*/

			//	double *one = (double*)calloc(countEl, sizeof(double));
			//	if (one == NULL)
			//	{
			//		printf("Память не выделена");
			//		//exit(0);
			//	}
			//	else
			//	{
			//		one = (double*)realloc(one, countEl + 1);
			//	}
			//	free(one);

			//	printf("\n");
			//	system("pause");
			//	system("cls");
			//}
			//break;

		case 2:
		{
			/*1.	Дан двумерный массив целых чисел
				a.	Сформировать одномерный массив, каждый элемент которого равен
				сумме четных положительных элементов соответствующего столбца двумерного массива
				b.	Сформировать одномерный массив, каждый элемент которого равен
				количеству нечетных отрицательных элементов соответствующей строки двумерного массива
				c.	Сформировать одномерный массив, каждый элемент которого равен
				количеству отрицательных элементов в соответствующей строке двумерного массива, кратных 3 или 7
				d.	Сформировать одномерный массив, каждый элемент которого равен
				сумме положительных элементов в соответствующем столбце двумерного
				массива, кратных 4 или 5
			*/

			int row, col, posEven;
			printf("Введите размер матрицы:");
			scanf("%d %d", &row, &col);

			int *mass = NULL;
			int a = row*col;
			mass = (int *)malloc(sizeof(int)*a);

			if (mass == NULL)
			{
				printf("Память не выделена");
				//exit(FALTU);
				exit(0);
			}
			else
			{
				fillArray(mass, row, col);
				printArray(mass, row, col);

				evenElem(mass, row, col);
				//printf("posEven = %d", posEven);



				printf("\n");
				system("pause");
				system("cls");

			}
			free(mass);
		}
		break;

		}

		printf("продолжить? 1-Да 2 - Нет: ");
		scanf("%d", &exitt);

	} while (exitt == 1);
}
