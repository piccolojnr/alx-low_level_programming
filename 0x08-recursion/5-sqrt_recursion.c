#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0, n));

}
/**
 * find_sqrt - finds the natural square root of a number
 * @num: number to be used
 * @start: the starting point
 * @end: the ending point
 *
 * Return: the square root of num
 */
int find_sqrt(int num, int start, int end)
{
	int middle;

	if (start > end)
		return (-1);

	middle =  (start + end) / 2;

	if (middle * middle == num)
		return (middle);
	else if (middle * middle > num)
		return (find_sqrt(num, start, middle - 1));
	else if (middle * middle < num)
		return (find_sqrt(num, middle + 1, end));
	else
		return (-1);
}
