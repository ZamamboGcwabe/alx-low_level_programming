#include "main.h"
#include <stdio.h>

/**
  *main - prints number of arguments passed to it
  *@argc: number of command line
  *@argv: array of strings
  *Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
