#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 * @s: The string to be changed
 *
 * Return: A pointer to the changed string
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] -= 32;
		}
		index++;
	}

	return (s);
}
