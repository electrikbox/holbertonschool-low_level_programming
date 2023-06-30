#include "main.h"

/**
 * set_string - change pointer to a char
 * @s: given array to change
 * @to: given array
*/

void set_string(char **s, char *to)
{
	if (s == NULL)
	{
		return;
	}

	if (to != NULL)
	{
		*s = to;
	}
	else
	{
		*s = NULL;
	}
}
