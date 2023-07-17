#include <stdio.h>

/**
 * main - Print a string with conditions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
