#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - ...
 * @ap: ...
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_str - ...
 * @ap: ...
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}
/**
 * print_int - ...
 * @ap: ...
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - ...
 * @ap: ...
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_all - prints anything
 * @format: format of the string
 * @...: variable number of arguments
 */
void print_all(const char * const format, ...)
{
	op_t formats[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"f", print_float},
	};
	int i = 0;
	int j;
	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		j = 0;
		while (formats[j].op)
		{
			if (format[i] == formats[j].op[0])
			{
				formats[j].f(ap);
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}

	printf("\n");
}
