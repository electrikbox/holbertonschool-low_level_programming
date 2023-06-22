#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2, sum;
	
	num1 = 0;
	num2 = 1;

	for (sum = 1; sum < 50; sum++)
	{
		printf("%d\n", sum);

		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
