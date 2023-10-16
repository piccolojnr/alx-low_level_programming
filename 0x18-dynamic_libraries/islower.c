#include "main.h"
/**
 * _islower - Entry point of program
 *
 * Description: checks for lowercase character
 *
 * @c: ascii decimal code for character
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
