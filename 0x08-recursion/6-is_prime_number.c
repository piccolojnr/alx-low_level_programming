#include "main.h"
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @i: int
 *
 * Return: 0 or 1
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
