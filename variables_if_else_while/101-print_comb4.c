#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int first, loop, num;

	for (first = 0; first < 9; first++)
	{
		for (loop = first + 1; loop < 10; loop++)
		{
			for (num  = loop + 1; num < 10; num++)
			{
				putchar(first + '0');
				putchar(loop + '0');
				putchar(num + '0');

				if (first < 7 && loop < 9 && num < 10)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
