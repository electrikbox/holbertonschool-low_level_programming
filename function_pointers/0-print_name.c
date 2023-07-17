#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name with given function
 * @name: given name to print
 * @f: given function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
