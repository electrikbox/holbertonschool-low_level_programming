#include "main.h"

/**
 * _puts - write a string in stdout
 *
 *  @str: function parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
