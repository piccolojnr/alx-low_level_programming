#include "main.h"
/**
 * print_time - prints the time in the format "HH:MM".
 * @hour: the hour to print.
 * @minute: the minute to print.
 */
void print_time(int hour, int minute)
{
	_putchar(hour / 10 + '0');
	_putchar(hour % 10 + '0');
	_putchar(':');
	_putchar(minute / 10 + '0');
	_putchar(minute % 10 + '0');
	_putchar('\n');
}
/**
 * jack_bauer - Entry point of program
 *
 * Description: prints every minute of the day of jack bauer
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			print_time(i, j);
		}
	}
}

