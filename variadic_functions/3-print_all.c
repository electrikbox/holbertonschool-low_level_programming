#include "variadic_functions.h"

/**
 * print_char - printf if arg is a char
 * @args: given arg
*/
	void print_char(va_list args)
	{
		printf("%c", va_arg(args, int));
	}

/**
 * print_int - printf if arg is a int
 * @args: given arg
*/
	void print_int(va_list args)
	{
		printf("%d", va_arg(args, int));
	}

/**
 * print_float - printf if arg is a float
 * @args: given arg
*/
	void print_float(va_list args)
	{
		printf("%f", va_arg(args, double));
	}

/**
 * print_string - printf if arg is a char *
 * @args: given arg
*/
	void print_string(va_list args)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
			return;
		}
		printf("%s", str);
	}

/**
 * print_all - print all arg with given type
 * @format: list of valid format to print
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int index1 = 0, index2 = 0;
	const char *separator = "";

	charTypes types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format != NULL && format[index1] != '\0')
	{
		index2 = 0;

		while (types[index2].argType != '\0')
		{
			if (format[index1] == types[index2].argType)
			{
				printf("%s", separator);
				types[index2].func(args);
				separator = ", ";
			}
			index2++;
		}
		index1++;
	}
	printf("\n");
	va_end(args);
}
