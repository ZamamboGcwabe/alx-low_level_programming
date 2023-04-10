#include "main.h"

/**
  *get_endianness - checks the endianness
  *Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	int num = 1;
	int i;
	int endianness;
	char *ptr = (char *) malloc(sizeof(int));

	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < (int)sizeof(int); i++)
	{
		ptr[i] = ((char *)&num)[i];
	}

	endianness = (int)ptr[0];
	free(ptr);
	return (endianness);
}
