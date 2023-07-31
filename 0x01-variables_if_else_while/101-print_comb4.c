#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all possible combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
