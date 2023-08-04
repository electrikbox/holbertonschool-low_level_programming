#include "main.h"
#include <stdio.h>

/**
 * set_bit - set bit to 1 at index position
 * @n: given number pointer
 * @index: index where bit should be set
 * Return: -1 if failes, 1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
