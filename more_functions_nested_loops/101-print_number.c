#include "main.h"
#include <limits.h>
/**
 * print_number - print number
 *
 * @n: given int
 *
 * Return : no return
 */
void print_number(int n)
{
	int length, temp, divisor, i, digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* get n lenght */
	length = 0;
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		length++;
	}

	/* get higher diviser factor to get all digit: '/ 1000' '/ 100' etc */
	divisor = 1;
	for (i = 1; i < length; i++)
	{
		divisor *= 10;
	}

	/* print digit, divide factor per 10 to have the next digit at next loop */
	while (divisor != 0)
	{
		digit = n / divisor;
		n %= divisor;
		divisor /= 10;
		_putchar(digit + '0');
	}
}
