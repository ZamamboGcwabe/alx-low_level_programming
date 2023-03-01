#include "main.h"
#include <stdio.h>

/**
  *infinite_add - adds two numbers
  *@n1: number to be added
  *@n2: number to ne added
  *@r: buffer that the function will use to store the result
  *@size_r: buffer size
  *Return: Always 0 (success)
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	if (i + 1 > size_r || j + 1 > size_r)
	{
		return (0);
	}
	r[size_r - 1] = '\0';
	i--;
	j--;
	while (i >= 0 || j >= 0)
	{
		int a = (i >= 0) ? n1[i] - '0' : 0;
		int b = (j >= 0) ? n2[j] - '0' : 0;
		int sum = a + b + carry;

		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
		i--;
		j--;
		if (k == size_r - 1)
		{
			return (0);
		}
	}
	if (carry != 0)
	{
		r[k++] = carry + '0';
	}
	if (k == size_r)
	{
		return (0);
	}
	while (k >= 0)
	{
		r[k] = r[k - 1];
		k--;
	}
	return (r);
}
