#include "main.h"

/**
  *is_palindrome - returns 1 if a string is a palindrome
  *@s: string to be printed
  *Return: 1 if a string is a palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
  *_strlen_recursion - returns len of string
  *@s: string to calculate
  *Return: len of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  *check_pal - checks char recursively for palindrome
  *@s: string to check
  *@i: iterator
  *@len: len of string
  *Return: 1 if a string is a palindrome, otherwise 0
  */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
