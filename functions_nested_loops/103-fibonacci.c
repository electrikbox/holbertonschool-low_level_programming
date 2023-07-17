#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long num1, num2, sum, printSum;

	num1 = 1;
	num2 = 2;
	printSum = 0;

	for (i = 1; num1 < 4000000; i++)
	{
		if (num1 % 2 == 0)
		{
			printSum += num1;
		}
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	printf("%lu\n", printSum);
	return (0);
}
