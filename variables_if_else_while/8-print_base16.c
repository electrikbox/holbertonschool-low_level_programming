#include <stdio.h>

/**
 * main - Print a string with conditions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
