#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1, mid, index;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (index = start; index <= end; index++)
		{
			printf("%d", array[index]);
			(index < end) ? printf(", ") : printf("\n");
		}

		if (array[mid] == value)
			return (mid);

		(array[mid] < value) ? (start = mid + 1) : (end = mid - 1);
	}

	return (-1);
}
