#include "main.h"

/**
 * swap_int - exchange value between a and b
 *
 * @a: function parameter
 *
 * @b: function parameter
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
