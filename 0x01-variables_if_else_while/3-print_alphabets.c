#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	char letter;

	letter = 'a';
	while
		(letter <= 'z') {
			putchar(letter);
			letter++;
		}
	letter = 'A';
		while
			(letter <= 'Z') {
				putchar(letter);
				letter++;
			}
	putchar ('\n');
	return (0);
}
