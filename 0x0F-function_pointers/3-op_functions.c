#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the sum of a & b
 * @a: number a
 * @b: number b
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the sum of a & b
 * @a: number a
 * @b: number b
 * Return: sum
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the sum of a & b
 * @a: number a
 * @b: number b
 * Return: sum
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the sum of a & b
 * @a: number a
 * @b: number b
 * Return: sum
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the sum of a & b
 * @a: number a
 * @b: number b
 * Return: sum
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
