#include <stdio.h>
/**
 * _isalpha - Entry point of program
 *
 * Description: checks for alphabetic character
 *
 * @c: ascii decimal code for character
 *
 * Return: 1 if @c is alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
