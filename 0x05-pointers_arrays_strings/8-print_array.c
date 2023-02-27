#include "main.h"
#include <stdio.h>

/**
  *print_array - prints n elements of an array
  *@a: array to be printed
  *@n: number of elements of the array
  *Return: void
  */
void print_array(int *a, int n)
{
	int j;

	for (j = *a; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
