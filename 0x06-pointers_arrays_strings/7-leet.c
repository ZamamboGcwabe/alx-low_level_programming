#include "main.h"

/**
  *leet - encodes a string into 1337
  *@str: pointer to a string
  *Return: Always 0 (success)
  */
char *leet(char *str)
{
	char *letters = "AEOTL";
	char *leet = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
