#include "main.h"

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
