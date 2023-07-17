#include <stdio.h>

/**
 * main - Print a string with conditions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 97;

	while (c < (97 + 26))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
