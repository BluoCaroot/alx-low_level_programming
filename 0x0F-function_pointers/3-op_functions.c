#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: number to add too
 * @b: number to add
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: number to subtract from
 * @b: number to subtract
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: number to multiply
 * @b: number to multiply to
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: number to divide
 * @b: number to divide by
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns modulus of a number
 * @a: divisor
 * @b: dividant
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
