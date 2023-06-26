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
	int overflow = 0;

	while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if ((result < INT_MIN / 10) ||
				(result == INT_MIN / 10 && (s[i] - '0') > -(INT_MIN % 10)))
		{
			overflow = 1;
			break;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	if (overflow)
		return (sign * INT_MAX);
	else
		return (sign * result);
}
