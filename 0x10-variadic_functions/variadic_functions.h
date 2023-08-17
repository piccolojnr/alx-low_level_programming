#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_types - Struct format_types
 * @format: the format
 * @func: The function pointer
 */
typedef struct format_types {
	char *format;
	void (*func)(va_list);
} format_map;

void print_char(va_list ap);
void print_str(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);

#endif /* VARIADIC_FUNCTIONS_H */
