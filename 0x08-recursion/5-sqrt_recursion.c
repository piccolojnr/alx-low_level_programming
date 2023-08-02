#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}
/**
 * find_sqrt - finds the natural square root of a number
 * @n: number to be used
 * @i: the starting point
 *
 * Return: the square root of num
 */
int _sqrt(int num, int i)
{
	int square = i * i;

	if (square > num)
		return (-1);
	else if (square == num)
		return (i);

	return _sqrt(num, i + 1);
}
