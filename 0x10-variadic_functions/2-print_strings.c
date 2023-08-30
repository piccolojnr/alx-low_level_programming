#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: a variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
