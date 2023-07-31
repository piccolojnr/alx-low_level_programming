#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints digits in base 16
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
