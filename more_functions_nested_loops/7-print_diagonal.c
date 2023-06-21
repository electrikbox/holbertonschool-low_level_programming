#include "main.h"

/**
 * print_diagonal - print diagonals.
 *
 * @n: parameter.
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int start;

	if (n > 0)
	{
		for (start = 0; start < n; start++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	_putchar('\n');
}
