#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all single digit numbers of bse 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
