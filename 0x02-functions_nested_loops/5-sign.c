#include "main.h"
/**
 * print_sign - Entry point of program
 *
 * Description: prints the sign of a number
 *
 * @n: number
 *
 * Return: 1 if @n is +ive, 0 if @n is zero, -1 if @n is -ive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
