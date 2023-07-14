#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all single digits number of base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);

	putchar('\n');

	return (0);
}
