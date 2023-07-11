#include "main.h"
#include <stdlib.h>

/**
 * array_range - set right amount of memory
 * @min: min given int
 * @max: max given int
 * Return: return new array
 */

int *array_range(int min, int max)
{
	int i, j, len = 0;
	int *array;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (j = 0; j <= (max - min); j++)
		array[j] = min + j;

	return (array);
}
