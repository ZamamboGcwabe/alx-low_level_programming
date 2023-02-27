#include "main.h"

/**
  *print_rev - prints string in reverse
  *@s: string to be printed
  *Return: 0
  */
void print_rev(char *s)
{
	int len = 0;

	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
