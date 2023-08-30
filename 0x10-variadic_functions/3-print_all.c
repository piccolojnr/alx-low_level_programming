#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: The conversion specifier to prints
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_str }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_char - Prints a character of char type
 * @separator: The separator of the character
 * @args: A list of variadic arguments
 *
 * Return: Nothing
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - Prints a character of integer type
 * @separator: The separator of the character
 * @args: A list of variadic arguments
 *
 * Return: Nothing
 */
void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - Prints a character of float type
 * @separator: The separator of the character
 * @args: A list of variadic arguments
 *
 * Return: Nothing
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_str - Prints the content of pointer to char type
 * @separator: The separator of the character
 * @args: A list of variadic arguments
 *
 * Return: Nothing
 */
void print_str(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
