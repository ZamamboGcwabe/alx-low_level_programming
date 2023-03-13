#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars, initializes with specific char
  *@size: size to print
  *@c: array
  *Return: NULL if size = 0
  */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
