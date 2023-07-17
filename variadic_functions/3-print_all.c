#include "variadic_functions.h"

/**
 * print_all - print all arg with given type
 * @format: list of valid format to print
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int index = 0;
	const char *separator = ", ";
	char *str;

	va_start(args, format);

	while (format && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (format[index + 1])
			printf("%s", separator);

		index++;
	}
	printf("\n");
	va_end(args);
}
