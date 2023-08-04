#include "main.h"

/**
 * binary_to_uint - transform given binary to int
 * @b: given binary
 * Return: 0 if not a binary, int if it is
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, index = 0;

	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		dec = (dec << 1) + (b[index] - '0');
		index++;
	}
	return (dec);
}
