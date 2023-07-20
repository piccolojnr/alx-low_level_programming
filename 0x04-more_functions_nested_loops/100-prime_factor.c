#include <stdio.h>
#include <math.h>
/**
 * is_prime_factor - checks if a number is a prime factor
 * @num: number to check
 *
 * Return: 1 if prime factor, 0 if not
 */
int is_prime_factor(long num)
{
	long i;

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}
/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime_factor = 2;

	while (number > largest_prime_factor)
	{
		if (number % largest_prime_factor == 0)
		{
			number /= largest_prime_factor;
		}
		else
		{
			largest_prime_factor++;
		}
	}

	printf("%ld\n", largest_prime_factor);

	return 0;
}
