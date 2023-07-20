#include "main.h"
/**
 * print_line - prints a straight line
 * @n: parameter
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
