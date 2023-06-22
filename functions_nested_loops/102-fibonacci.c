#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long num1, num2, sum;

	num1 = 1;
	num2 = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%lu", num1);

		if (i != 50)
		{
			printf(", ");
		}
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
