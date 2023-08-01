#include <stdio.h>

/**
 * print_binary - function to print the binary representation of a number
 * @n: given number
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8 - 1;
	int firstOneFound = 0;
	unsigned long int mask;

	while (size >= 0)
	{
		mask = 1UL << size;

		if ((n & mask) != 0)
		{
			putchar('1');
			firstOneFound = 1;
		}
		else if (firstOneFound)
		{
			putchar('0');
		}
		size--;
	}

	if (!firstOneFound)
		putchar('0');
}
