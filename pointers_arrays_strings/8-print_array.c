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

	n = sizeof(*a);

	while (i < n + 1)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
		i++;
	}
	putchar('\n');
}
