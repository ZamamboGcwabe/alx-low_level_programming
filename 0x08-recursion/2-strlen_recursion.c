#include "main.h"

/**
  *_strlen_recursion - returns the length of a string
  *@s: strint to be printed
  *Return: always 0 (success)
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
