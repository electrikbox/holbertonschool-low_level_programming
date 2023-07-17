#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - addition of a and b
 * @a: number 1
 * @b: number 2
 * Return: operation result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction of a and b
 * @a: number 1
 * @b: number 2
 * Return: operation result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of a and b
 * @a: number 1
 * @b: number 2
 * Return: operation result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: number 1
 * @b: number 2
 * Return: operation result
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of a and b
 * @a: number 1
 * @b: number 2
 * Return: operation result
*/
int op_mod(int a, int b)
{
	return (a % b);
}
