#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - memory allocating for grid
 * @width: given width
 * @height: given height
 * Return: new array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int row, col, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof(int) * width);

		if (array[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			array[row][col] = 0;
	}

	return (array);
}
