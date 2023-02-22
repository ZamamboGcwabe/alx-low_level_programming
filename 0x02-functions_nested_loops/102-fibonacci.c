#include <stdio.h>

/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	printf("%d, %d", fib[0], fib[1]);
	for (int i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(", %d", fib[i]);
	}
	printf("\n");
	return (0);
}
