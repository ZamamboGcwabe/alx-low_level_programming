#include "function_pointers.h"
#include "0-calc.h"

/**
  *main - performs simple operations
  *@argc: number of arguments
  *@argv: array of pointers
  *Return: always 0
  */
int main(int __attribute__((__unused__))__ argc, chsr *argv[])
{
	int num1, num2;
	int result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	switch (operator)
	{
		case '+';
		result = num1 + num2;
		break;
		case '-';
		result = num1 - num2;
		break;
		case '*';
		result = num1 * num2;
		break;
		case '/';
		if (num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		result = num1 / num2;
		break;
		case '%';
		if (num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		result = num1 % num2;
		break;
		default:
		printf("Error\n");
		return (99);
	}
	
	printf("%d\n", result);
	return (0);
}
