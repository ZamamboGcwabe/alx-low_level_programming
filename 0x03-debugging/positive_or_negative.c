#include "main.h"

/**
 *positive_or_negative - prints correct output when given 0
 *@n: int to be checked
 *Return: always 0 (success)
 */
void positive_or_negative(int n)
{
	if (n == 0)
		printf("%d is zero.\n", n);
	else if (n > 0)
		printf("%d is positive.\n", n);
	else
		printf("%d is negtive.\n", n);
}
