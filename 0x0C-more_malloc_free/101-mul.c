#include "main.h"
#include <stdlib.h>
/**
 * error - prints error
 */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * is_valid_number - checks if number is valid
 * @num: number
 *
 * Return: 1 if number is valid else 0
 */
int is_valid_number(const char *num)
{
	while (*num != '\0')
	{
		if (*num < '0' || *num > '9')
		{
			return (0);
		}
		num++;
	}
	return (1);
}
/**
 * str_to_int - converts string to int
 * @str: string to convert
 *
 * Return: int
 */
int str_to_int(const char *str)
{
	int result = 0;

	while (*str != '\0')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}
/**
 * multiply_numbers - multiplies two positive numbers
 * @num1: num1
 * @num2: num2
 *
 * Return: pinter to result
 */
char *multiply_numbers(int num1, int num2)
{
	int i, result, temp, num_digits = 0;

	char *buffer;

	result = num1 * num2;

	temp = result;
	while (temp > 0)
	{
		temp /= 10;
		num_digits++;
	}

	buffer = (char *)malloc((num_digits + 1) * sizeof(char));

	if (buffer == NULL)
	{
		exit(1);
	}

	buffer[num_digits] = '\0';

	for (i = num_digits - 1; i >= 0; i--)
	{
		buffer[i] = (result % 10) + '0';
		result /= 10;
	}

	return (buffer);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num1, num2;
	char *result_buffer;

	if (argc != 3)
	{
		error();
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		error();
	}

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);

	result_buffer = multiply_numbers(num1, num2);

	for (i = 0; result_buffer[i] != '\0'; i++)
	{
		_putchar(result_buffer[i]);
	}
	_putchar('\n');

	free(result_buffer);

	return (0);
}
