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

	num1 = 10;
	num2 = 11;

	for (i = 1; i <= 98; i++)
	{
		while(num1 >= 10)
		{
			n = num1 / 10;
			if (n == 1 && n == 2)
			{
				printf("%lu\n", num1);
			}
			num1++;
		}

		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
