#include "main.h"
#include <stdio.h>

/**
  *main - prints all arguments receives
  *@argc: number of command line
  *@argv: array of strings
  *Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
