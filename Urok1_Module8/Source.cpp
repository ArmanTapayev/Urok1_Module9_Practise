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
		printf("������� ����� �������: ");
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
			//		printf("������ �� ��������");
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
			//		printf("������ �� ��������");
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
			/*1.	��� ��������� ������ ����� �����
				a.	������������ ���������� ������, ������ ������� �������� �����
				����� ������ ������������� ��������� ���������������� ������� ���������� �������
				b.	������������ ���������� ������, ������ ������� �������� �����
				���������� �������� ������������� ��������� ��������������� ������ ���������� �������
				c.	������������ ���������� ������, ������ ������� �������� �����
				���������� ������������� ��������� � ��������������� ������ ���������� �������, ������� 3 ��� 7
				d.	������������ ���������� ������, ������ ������� �������� �����
				����� ������������� ��������� � ��������������� ������� ����������
				�������, ������� 4 ��� 5
			*/

			int row, col, posEven;
			printf("������� ������ �������:");
			scanf("%d %d", &row, &col);

			int *mass = NULL;
			int a = row*col;
			mass = (int *)malloc(sizeof(int)*a);

			if (mass == NULL)
			{
				printf("������ �� ��������");
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

		printf("����������? 1-�� 2 - ���: ");
		scanf("%d", &exitt);

	} while (exitt == 1);
}
