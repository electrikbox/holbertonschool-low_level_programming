#include "main.h"

/**
 * print_to_98 - check the code.
 *
 * @n: int parameter
 *
 * Return: no return.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 0)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) % 10 + '0');
			}
			else if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar('-');
			if (n < -99)
			{
				_putchar((n / 100) * -1 + '0');
				_putchar((n / 10) * -1 % 10 + '0');
			}
			else if (n < -9)
			{
				_putchar((n / 10) * -1 + '0');
			}
			_putchar((n % 10) * -1 + '0');
		}
		_putchar(',');
		_putchar(' ');
		n < 98 ? n++ : n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
