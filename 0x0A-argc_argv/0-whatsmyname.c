#include "main.h"
#include <stdio.h>

/**
  *main - prints its name
  *@argc: indicates number of command line
  *@argv: array of strings
  *
  *Return: always 0 (success)
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
