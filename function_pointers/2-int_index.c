#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - get the index of matching compare int
 * @array: given array
 * @size: array size
 * @cmp: function pointer
 * Return: index of match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (counter = 0; counter < size; counter++)
			if (cmp(array[counter]))
				return (counter);

	return (-1);
}
