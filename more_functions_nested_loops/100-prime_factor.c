#include <stdio.h>
#include <math.h>

/**
 * largestPrime - give the largest prime of num
 *
 * @num: given number
 *
 * Return: largest prime of num
 */

unsigned long largestPrime(unsigned long num)
{
	long int divisor;

	for (divisor = 2; divisor <= sqrt(num); divisor++)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
		}
	}
	return (num);
}

/**
 * main - entry point of the program
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largestPrimeNum = largestPrime(number);

	printf("%lu\n", largestPrimeNum);
	return (0);
}
