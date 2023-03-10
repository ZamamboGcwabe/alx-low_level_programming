#include "main.h"

/**
  *_strcat - concatenates two strings
  *@src: source value
  *@dest: destination value
  *Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
