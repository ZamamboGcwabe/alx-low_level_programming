#include "main.h"

/**
  *_strspn - gets the length of a prefix substring
  *@s: pointer to a string
  *@accept: pointer to a string
  *Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accept;
	char *p = accept;

	while (*s != '\0')
	{
		is_accept = 0;
		for (; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				is_accept = 1;
				break;
			}
		}
		if (!is_accept)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
