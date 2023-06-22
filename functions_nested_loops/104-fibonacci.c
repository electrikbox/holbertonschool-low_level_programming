#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, n;
	unsigned long num1, num2, sum;

	num1 = 0;
	num2 = 1;

	for (i = 1; i <= 98; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
