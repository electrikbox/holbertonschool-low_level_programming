#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - convert char to int
 *
 * @s: function parameter
 *
 * Return: return converted int
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result * 10 + (s[i] - '0') < INT_MIN)
			result = INT_MIN;
		else
			result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
