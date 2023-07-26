#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 *
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		print_hexadecimal_content(i, size, b);

		printf(" ");

		print_buffer_content(i,  size, b);

		printf("\n");
	}
}
/**
 * print_hexadecimal_content - prints hexadecimal content
 * @i: i
 * @size: size
 * @b: b
 */
void print_hexadecimal_content(int i, int size, char *b)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			printf("%02x", (unsigned char)b[i + j]);
		}
		else
		{
			printf("  ");
		}

		if (j % 2 == 1)
		{
			printf(" ");
		}
	}
}
/**
 * print_buffer_content - prints buffer content
 * @i: i
 * @size: size
 * @b: b
 */
void print_buffer_content(int i, int size, char *b)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			char ch = b[i + j];

			printf("%c", (ch >= 32 && ch <= 126) ? ch : '.');
		}
		else
		{
			printf(" ");
		}
	}
}
