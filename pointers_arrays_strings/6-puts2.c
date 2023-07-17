#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: function parameter
 */

void puts2(char *str)
{
	int index = 0;

	while (*str != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		index++;
	}
	_putchar('\n');
}
