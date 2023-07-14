#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all possible combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
