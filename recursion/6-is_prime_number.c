#include "main.h"

/**
  * isPrime - check if prime number or not
  * @i: counter
  * @base: given int
  * Return: 1 if prime, return 0 if not
  */

int isPrime(int i, int base)
{
	if (base % i == 0 || base < 2)
		return (0);

	else if (i == base - 1)
		return (1);

	else if (base > i)
		return (isPrime(i + 1, base));

	return (1);

}
/**
  * is_prime_number - checks if n is a prime number
  * @n: given int
  * Return: 1 if prime, return 0 if not
  */

int is_prime_number(int n)
{
	return (isPrime(2, n));
}
