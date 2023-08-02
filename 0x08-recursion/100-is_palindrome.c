#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = get_len(s);
	char *t = s;

	if (len == 0)
		return (1);

	len--;
	t += len;

	return (compare(s, t));
}
/**
 * get_len - gets length of string
 * @s: string
 *
 * Return: length of string
 */
int get_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_len(s + 1));
}
/**
 * compare - compares two characters
 * @s: first character
 * @t: second character
 *
 * Return: 1 if equal, 0 if not
 */

int compare(char *s, char *t)
{
	if (*s == '\0')
		return (1);
	if (*s == *t)
		return (compare(s + 1, t - 1));
	return (0);
}
