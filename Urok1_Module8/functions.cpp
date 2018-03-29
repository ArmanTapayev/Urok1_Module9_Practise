#include <stdio.h>
#include <locale.h>
#include<time.h>
#include<iostream>
#include<stdlib.h>
#include "Header.h"

void fillArray(int *mass, int row, int col)
{
	for (int i = 0; i < row*col; i++)
	{
		*(mass + i) = 10 + rand() % 50;
	}
}

void printArray(int *mass, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t",*(mass + i*row+j));
		}
		printf("\n");
	}
}

void evenElem(int *mass, int row, int col)
{
	int *arr = NULL;
	arr = (int *)malloc(sizeof(int)*col);

		if (mass == NULL)
		{
			printf("Память не выделена");
			//exit(FALTU);
			exit(0);
		}
		else
		{
			int k = 0;
			for (int j = 0; j < col; j++)
			{
				for (int i = 0; i < row; i++)
				{
					if (((*(mass + i) + j) > 0) && (*(mass + i) + j) % 2 == 0)))
					{
						*(arr + j) += *(mass + i + j*col);
						//k++;
					}

					//printf("%d\t", *(mass + i*row + j));
				}
				printf("\n");
			}

			printArray(arr, row, col);
		}
		free(mass);
}