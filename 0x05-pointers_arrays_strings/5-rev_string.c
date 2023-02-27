#include "main.h"

/**
  *rev_string - reverses a string
  *@s: input string
  *Return: string in rev
  */
void rev_string(char *s)
{
	char rev = 0;

	int counter = 0;

	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
