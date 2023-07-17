#include "main.h"

/**
 * _puts_recursion - print with recursive
 * @s: given array
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
