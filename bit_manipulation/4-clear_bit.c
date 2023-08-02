#include "main.h"

/**
 * clear_bit - set bit to 0 at index
 * @n: given number
 * @index: given index
 * Return: -1 if failed, 1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	mask = 1 << index;
	*n = *n & ~mask;

	return (1);
}
