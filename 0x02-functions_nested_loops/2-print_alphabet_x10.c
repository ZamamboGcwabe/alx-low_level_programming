#include "main.h"
/**
  *print_alphabet_x10 - print all alphabet in lowercase
  */
void print_alphabet_x10(void)
{
	char letter = 'a';

	int i;

	int j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 26; j++)
			_putchar(letter + j);
	_putchar('\n');
}
