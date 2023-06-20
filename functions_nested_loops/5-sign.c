#include "main.h"

/**
 * print_sign - check the code.
 *
 * @n: parameter
 *
 * Return: -1 if smaller 0, 0 if 0, 1 if greater.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
