#include "main.h"

/**
  *positive_or_negative - prints correct output when given 0
  *@i: int to be checked
  *Return: always 0 (success)
  */
void positive_or_negative(int i)
{
	int i = 0;

	if (i == 0)
		printf("%d is zero.\n", i);
	else if (i > 0)
		printf("%d is positive.\n", i);
	else
		printf("%d is negtive.\n", i);
}
