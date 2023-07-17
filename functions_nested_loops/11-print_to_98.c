#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code.
 *
 * @n: int parameter
 *
 * Return: no return.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n < 98 ? n++ : n--;
	}
	printf("98\n");
}
