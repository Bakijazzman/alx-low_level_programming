#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: first number
 * @b: second number
 * Return: summation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract integers
 * @a: frst integer
 * @b: second integer
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: first integer
 * @b: second integer
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modolus
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
