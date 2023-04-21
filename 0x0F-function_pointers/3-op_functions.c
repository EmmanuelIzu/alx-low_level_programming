#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that adds two intergers
 * @a: input variable a
 * @b: input variable b
 * Return: the final value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substracts two intergers
 * @a: input variable a
 * @b: input variable b
 * Return: the final value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that mutiplies two intergers
 * @a: input variable a
 * @b: input variable b
 * Return: the final value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two intergers
 * @a: input variable a
 * @b: input variable b
 * Return: the final value
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns the remainder
 * @a: input variable a
 * @b: input variable b
 * Return: the final value
 */

int op_mod(int a, int b)
{
	return (a % b);
}
