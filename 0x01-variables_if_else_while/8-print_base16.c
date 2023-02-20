#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	char letter;

	int n;

	letter = 'a';
	n = 0;
	while
		(n < 10) {
			putchar(n + '0');
			n++;
		}
	while
		(letter <= 'f') {
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
