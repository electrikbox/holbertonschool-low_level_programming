#include "main.h"

/**
 * _memset - fill memory
 *
 * @s: given array
 * @b: char to print
 * @n: number of time
 *
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
