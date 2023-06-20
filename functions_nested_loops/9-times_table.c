#include "main.h"

/**
 * times_table - check the code.
 *
 * Return: no return.
 */

void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int result = row * col;

			if (result > 9)
			{
				_putchar(result / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(result % 10 + '0');
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
