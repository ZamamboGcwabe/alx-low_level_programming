#include "main.h"

/**
 *get_endianness - checks the endianness
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *ptr = (char *) malloc(sizeof(int));
	int i;
	int endianness;
	int num = 1;

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
