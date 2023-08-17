#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char - Prints a character
 * @ap: Argument list
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer
 * @ap: Argument list
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: Argument list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - Prints a string
 * @ap: Argument list
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * print_all - Prints anything based on the format
 * @format: Format string
 * @...: Variable number of arguments
 */
void print_all(const char * const format, ...)
{
	format_map fmts[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{0, NULL}
	};

	int i = 0;
	int j;
	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (fmts[j].format)
		{
			if (format[i] == *fmts[j].format)
			{
				fmts[j].func(ap);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}
