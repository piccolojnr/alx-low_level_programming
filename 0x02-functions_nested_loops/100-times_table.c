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
		print_times_row(i, n);
	}
}
/**
 * print_times_row - Prints a single row of the times table.
 *
 * @row_num: The row number to be printed.
 * @max: The maximum value for the times table.
 */
void print_times_row(int row_num, int max)
{
	for (j = 0; j <= max; j++)
	{
		int product = max * j;

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

		if (j < max)
			_putchar(',');
		else
			_putchar('\n');
	}
}

