#include "main.h"

/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: number to convert
  *Return: The converted number, or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len;
	int i;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result <<= 1;
			result |= 1;
		}

		else
		{
			return (0);
		}
	}
	return (result);
}
