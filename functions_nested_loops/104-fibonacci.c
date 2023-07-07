#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long num1, num2, sum, sumFront, sumBack;
	unsigned long frontNum, backNum;
	
	num1 = 1;
	num2 = 2;

	printf("%lu, %lu, ", num1, num2);

	for (i = 3; i <= 98; i++)
	{
		if (num1 + num2 > 10000000000)
		{
			frontNum = (num1 + num2) / 10000000000;
			backNum = (num1 + num2) % 10000000000;

			printf("%lu%lu", frontNum, backNum);

			sumBack = num1 + num2;
			num1 = num2;
			num2 = sumBack;
		}
		else
		{
			/*printf("%lu", sum);*/

			sum = num1 + num2;
                        num1 = num2;
                        num2 = sum;

			printf("%lu", sum);
		}
		if (i != 98)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
