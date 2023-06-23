#include "main.h"

/**
 * print_number - print number
 *
 * @n: given int
 *
 * Return: no return.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 999)
	{
		_putchar(n / 1000 + '0');
	}
	if (n > 99)
	{
		_putchar((n / 100) % 10 + '0');
	}
	if (n > 9)
	{
		_putchar((n / 10) % 10 + '0');
	}
	_putchar(n % 10 + '0');
}
