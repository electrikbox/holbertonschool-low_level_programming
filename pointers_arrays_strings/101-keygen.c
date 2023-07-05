#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main program
 * Return: random valid password
 */

int main(void)
{
	int password[64], i, sum = 0, n;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		password[i] = rand() % 90 + 33;
		sum += password[i];
		putchar(password[i]);

		if ((2772 - sum) < 90 + 33)
		{
			n = 2772 - sum;
			sum += n;
			putchar(n);
			break;
		}
	}
	return (0);
}
