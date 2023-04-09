#include "main.h"
#include <limits.h>

/**
  *print_binary - prints the binary representation of a number
  *@n: unsigned long int
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = ULONG_MAX;

	mask >>= 1;
	mask += 1;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
