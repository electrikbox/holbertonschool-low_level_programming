#include <stdio.h>

/**
 * print_binary - function to print the binary representation of a number
 * @n: given number
 */
void print_binary(unsigned long int n)
{
	int bitsCount = 0;
	unsigned long int temp = n, bitVal;

	while (temp >>= 1)
		bitsCount++;

	for (;bitsCount >= 0; bitsCount--)
	{
		bitVal = (n >> bitsCount) & 1;

		if (bitVal == 1)
			putchar('1');
		else
			putchar('0');
	}
}
