#include <stdio.h>
#include <stdlib.h>

/**
  *print_opcodes - prints the opcodes of its own main function
  *@ptr: pointer
  *@size: an integer
  */
void print_opcodes(unsigned char *ptr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}

/**
  *main - checks code
  *@argc: number of arguments
  *@argv: array of strings
  *Return: Always 0 (success)
  */
int main(int argc, char **argv)
{
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *) main;

	print_opcodes(ptr, size);

	return (0);
}
