#include "main.h"

/**
 * print_times_table - check the code.
 *
 * @n: parameter
 *
 * Return: no return.
 */

void print_times_table(int n)
{
	int row, col;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				int result = row * col;

				if (col !=  0)
				{
					if (result <= 99)
						_putchar(' ');
					if (result <= 9)
						_putchar(' ');
				}
				if (result > 99)
				{
					_putchar((result / 100) % 10 + '0');
				}
				if (result > 9)
				{
					_putchar((result / 10) % 10 + '0');
				}
				_putchar(result % 10 + '0');
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
