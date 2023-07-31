#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: input string.
 *
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
	int i;

	int is_word_start = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_word_start && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 'a' + 'A';
		}

		is_word_start = 0;

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}') {
			is_word_start = 1;
		}
	}

	return (s);
}

