#include <stdio.h>
#include <math.h>

/**
  *main - prints the largest prime factor
  *Return: always 0 (success)
  */
int main(void)
{
	long int num = 612852475143;
	long int largest_factor = 1;

	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}
	int i;

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}
}
