#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
