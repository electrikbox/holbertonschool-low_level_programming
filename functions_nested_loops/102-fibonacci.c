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

	num1 = 0;
	num2 = 1;

	for (i = 0; i < 49; i++)
	{
		printf("%lu", num1);

		if (i != 49)
		{
			printf(", ");
		}
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
