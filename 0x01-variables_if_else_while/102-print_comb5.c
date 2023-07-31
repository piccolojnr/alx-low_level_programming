#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all possible combinations of two digits form 0 to 99
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
