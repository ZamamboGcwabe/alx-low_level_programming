#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *rot13 - encodes a string using rot13
  *@str: pointer to string
  *Return: Always 0 (success)
  */
char *rot13(char *str)
{
	int i, length = 0;
	char *result;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	result = (char *)malloc(sizeof(char) * (length + 1));

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			result[i] = (((str[i] - 'a') + 13) % 26) + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result[i] = (((str[i] - 'A') + 13) % 26) + 'A';
		}
		else
		{
			result[i] = str[i];
		}
	}

	result[i] = '\0';
	return (result);
}
