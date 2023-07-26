#include "main.h"
/**
 * print_digits - Prints the digits of a number.
 * @num: The number to be printed.
 *
 */
void print_digits(int num)
{
	if (num == 0)
		return;
	print_digits(num / 10);
	_putchar('0' + num % 10);
}
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_digits(n);
}
