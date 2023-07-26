#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 *
 */
void print_buffer(char *b, int size) {
	if (size <= 0) {
		printf("\n");
		return;
	}

	int i, j;
	for (i = 0; i < size; i += 10) {
		printf("%08x: ", i);

		for (j = 0; j < 10; j++) {
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		printf(" ");
		for (j = 0; j < 10 && i + j < size; j++) {
			if (isprint(b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}
