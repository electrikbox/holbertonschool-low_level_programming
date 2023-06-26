#include <stdio.h>
#include "main.h"

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

	while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (sign * result);
}
