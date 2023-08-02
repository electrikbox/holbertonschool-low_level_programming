#include "main.h"

/**
 * flip_bits - count the flip count needed to have the same number
 * @n: first number
 * @m: second number
 * Return: count of flip needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipCount = 0, count = 0, size = sizeof(n) * 8;

	while (count < size)
	{
		if ((n & 1) != (m & 1))
			flipCount++;
		n >>= 1;
		m >>= 1;
		count++;
	}
	return (flipCount);
}
