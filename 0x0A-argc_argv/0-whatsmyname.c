#include "main.h"
#include <stdio.h>

/**
  *main - prints its name
  *@argc: indicates number of command line
  *@argv: array of strings
  *Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i = 1;

	printf("%d\n", argc);
	printf("%s\n", argv[0]);

	for (; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}
	return (0);
}
