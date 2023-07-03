#include "main.h"

/**
 * getSqrt - calculate the square of given int
 * @n: square
 * @base: given int
 * Return: natural square of base
 */

int getSqrt(int n, int base)
{
	if (n * n == base)
		return (n);

	if (n * n > base)
		return (-1);

	return (getSqrt(n + 1, base));
}

/**
 * _sqrt_recursion - return natural square of n.
 * @n: given int
 * Return: natural square
 */

int _sqrt_recursion(int n)
{
	return (getSqrt(1, n));
}
