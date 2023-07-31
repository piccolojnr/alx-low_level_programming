#include "main.h"
/**
 * times_table - Entry point of program
 *
 * Description: prints prints the 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int value = i * j;

			if (j != 0)
				_putchar(' ');

			if (value >= 10)
				_putchar(value / 10 + '0');
			else if (j != 0)
				_putchar(' ');

			_putchar(value % 10 + '0');

			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
