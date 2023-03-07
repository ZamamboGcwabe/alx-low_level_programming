#include "main.h"

/**
  *_strchr - locates character in a string
  *@s: pointer to a string
  *@c: char to be checked
  *Return: pointer to the first occurrence of char c in string s, or NULL
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
