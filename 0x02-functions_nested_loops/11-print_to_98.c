#include "main.h"
/**
 * print_to_98 - Entry point of program
 *
 * Description: prints prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;
	i = n;

	while (1)
	{
		int value = i;

		if (i != n)
			_putchar(' ');

		if (i < 0)
			value = -i;

		if (i < 0)
			_putchar('-');

		if (value >= 10 && value < 100)
			_putchar(value / 10 + '0');
		else if ( value >= 100 && value < 1000)
		{
			_putchar(value / 100 + '0');
			_putchar((value / 10) % 10 + '0');
		}

		_putchar(value % 10 + '0');

		if (i != 98)
			_putchar(',');
		if (i > 98)
			i--;
		else if (i < 98)
			i++;
		else
			break;
	}

	_putchar('\n');
}
