#include "main.h"

/**
 * get_bit - get the bit from number at index position
 * @n: given number
 * @index: given index
 * Return: bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);
}
