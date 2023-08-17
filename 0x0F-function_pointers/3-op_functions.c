#include "3-calc.h"
/**
 * op_add - return the sum of a and b
 * @a: a
 * @b: b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the sum of a and b
 * @a: a
 * @b: b
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the ultmiplicationm of a and b
 * @a: a
 * @b: b
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the division of a and b
 * @a: a
 * @b: b
 * Return: division of a and b
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
 * op_mod - return the modulo of a and b
 * @a: a
 * @b: b
 * Return: modulo of a and b
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

