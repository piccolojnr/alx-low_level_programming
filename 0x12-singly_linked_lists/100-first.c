#include <stdio.h>
/**
 * print_message - prints a message
 * before the main function executes
 */
void __attribute__((constructor)) print_message()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
