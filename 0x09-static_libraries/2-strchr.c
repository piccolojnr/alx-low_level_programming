#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character ina string
 * @s: string to locate char
 * @c: charater to be located
 *
 * Return: first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
