#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - returns a pointer to a newly allocated space in memory
  *@str: string to be checked
  *Return: NULL if str = NULL
  */
char *_strdup(char *str)
{
	char *dup_str = (char *) malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (dup_str == NULL)
	{
		return (NULL);
	}

	strcpy(dup_str, str);
	return (dup_str);
}
