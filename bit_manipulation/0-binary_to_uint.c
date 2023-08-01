#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, index = 0;

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		else if (b[index] == '1')
			dec = (dec << 1) | 1;

		else if (b[index] == '0')
			dec = (dec << 1);

		index++;
	}
	return (dec);
}
