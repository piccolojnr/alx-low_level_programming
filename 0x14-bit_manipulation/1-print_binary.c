#include "main.h"
void print_binary_helper(unsigned long int n);
/**
 * print_binary_helper - prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary_helper(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	print_binary_helper(n);
}

