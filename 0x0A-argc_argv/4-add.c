#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - adds positive numbers
  *@argc: number of command line
  *@argv: array of strings
  *Return: always 0
  */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int sum = 0, i, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num <= 0)
		{
			continue;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
