#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	print_all("cifs", 'H', 42, 3.14, "Hello");
	print_all("sfi", NULL, -17, 2.71828);
	return (0);
}
