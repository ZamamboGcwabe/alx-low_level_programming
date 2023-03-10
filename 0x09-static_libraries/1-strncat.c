#include "main.h"

/**
  *_strncat - concatenates two strings
  *@src: source value
  *@dest: destination value
  *@n: integer
  *Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src && n-- > 0)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
