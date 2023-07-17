#include "main.h"

/**
 * print_last_digit - check the code.
 *
 * @num: function parameter
 *
 * Return: 1 if lower, 0 if not.
 */

int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
