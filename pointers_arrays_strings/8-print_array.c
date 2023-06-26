#include "main.h"
#include <stdio.h>

/**
 * print_array - print all elements from array
 *
 * @a: array
 *
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n -1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
