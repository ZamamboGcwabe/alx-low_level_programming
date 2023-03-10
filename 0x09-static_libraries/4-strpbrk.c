#include "main.h"

/**
  *_strpbrk - searches a string for any of a set of bytes
  *@s: pointer to a string
  *@accept: pointer to a string
  *Return: NULL
  */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != '\0')
	{
		for (; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
