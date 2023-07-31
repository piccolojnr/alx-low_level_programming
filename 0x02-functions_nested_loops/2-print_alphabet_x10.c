#include "main.h"
/**
 * print_alphabet_x10 - Entry point of program
 *
 * Description: prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		char letter = 'a';

		for (j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
