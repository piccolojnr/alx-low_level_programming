#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
