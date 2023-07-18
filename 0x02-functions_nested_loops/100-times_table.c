#include "main.h"
/**
 * print_times_table - Entry point of program
 *
 * Description: prints prints the n times table
 * @n: integer
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			/* Print the appropriate padding and product */
			if (j == 0)
				_putchar('0');
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + product / 100);
				_putchar('0' + (product / 10) % 10);
				_putchar('0' + product % 10);
			}

			/* Print separators between products */
			if (j < n)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
