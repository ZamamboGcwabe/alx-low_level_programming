#include "variadic_functions.h"

/**
  *print_all - prints anything
  *@format: a list of types of arguments
  *Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *f = format;
	char c;
	int i;
	float flt;
	char *str;

	va_start(args, format);

	while (*f != '\0')
	{
		switch (*f)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				flt = va_arg(args, double);
				printf("%f", flt);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				} else
				{
					printf("%s", str);
				}
				break;
			default:
				break;
		}

		f++;

		if (*f != '\0' && (*f == 'c' ||*f == 'i' || *f == 'f' || *f == 's'))
		{
			printf(", ");
		}
	}

	va_end(args);

	printf("\n");
}
