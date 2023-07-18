#include "main.h"
/**
 * print_last_digit - Entry point of program
 *
 * Description: prints last digit of a number
 * @num: number
 *
 * Return: int (Success)
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = -num;

	last_digit = num % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
