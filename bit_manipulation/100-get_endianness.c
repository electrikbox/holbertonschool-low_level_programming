#include "main.h"

/**
 * get_endianness - check if sys is little or big endian
 * Return: 1 if little, 0 if big
*/
int get_endianness(void)
{
	int x = 1;
	char *a = (char *)&x;

	if (a[0] == 1)
		return (1);

	return (0);
}
