#include "main.h"

/**
  *puts2 - prints every other character of a string
  *@str: input string
  *Return: print string
  */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
