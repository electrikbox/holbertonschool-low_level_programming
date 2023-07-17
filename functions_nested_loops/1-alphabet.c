#include "main.h"

/**
 * print_alphabet - it's pretty obvious no ?
 *
 * Return: no return
 */
void print_alphabet(void)
{
	int c = 97;

	while (c < (97 + 26))
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
