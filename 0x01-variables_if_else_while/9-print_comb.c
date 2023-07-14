#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all possible combinations of single-digt numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
		if (letter != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
