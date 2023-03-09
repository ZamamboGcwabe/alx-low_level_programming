#include "main.h"

/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: number to calculate
  *Return: If n does not have natural square root, function should return -1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
  *actual_sqrt_recursion - recurses to find square root
  *@n: number to calculate
  *@i: iterator
  *Return: resulting square root
  */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
