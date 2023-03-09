#include "main.h"

/**
  *is_prime_number - returns 1 if the input integer is a prime number
  *@n: number to calculate
  *Return: 1 if n is prime number, otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_is_prime_number(n, n - 1));
}

/**
  *actual_is_prime_number - calculates if number is prime recursively
  *@n: number to calculate
  *@i: iterator
  *Return: 1 if n is prime number, otherwise
  */
int actual_is_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_is_prime_number(n, i - 1));
}
