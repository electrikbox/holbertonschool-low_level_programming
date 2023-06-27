#include "main.h"

/**
 * reverse_array - reverse all int from array
 *
 * @a: array
 * @n: array lenght
 */
void reverse_array(int *a, int n)
{
	int i;
	int *begin, *end, temp;

	begin = a;
	end = a;

	for (i = 0; i < n - 1; i++)
		end++;

	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
