#include "main.h"
#include <stdlib.h>

/**
 * is_whitespace - Checks if a character is a whitespace character.
 * @c: The character to check
 *
 * Return: 1 if character is whitespace, 0 otherwise
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_whitespace(*str))
		{
			in_word = 0;
		}
		else
		{
			if (in_word == 0)
			{
				count++;
				in_word = 1;
			}
		}
		str++;
	}

	return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, word_count, in_word, index;
	char *word_start;
	char **word_array;

	if (str == NULL || *str == '\0')
		return NULL;

	word_count = count_words(str);

	word_array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (word_array == NULL)
		return NULL;

	index = 0;
	word_start = NULL;
	in_word = 0;

	while (*str)
	{
		if (is_whitespace(*str))
		{
			if (in_word)
			{
				word_array[index] = (char *)malloc((str - word_start + 1) * sizeof(char));
				if (word_array[index] == NULL)
				{
					for (i = 0; i < index; i++)
					{
						free(word_array[i]);
					}
					free(word_array);
					return NULL;
				}
				_strncpy(word_array[index], word_start, str - word_start);
				word_array[index][str - word_start] = '\0';
				index++;
				in_word = 0;
			}
		}
		else
		{
			if (in_word == 0)
			{
				word_start = str;
				in_word = 1;
			}
		}
		str++;
	}

	if (in_word)
	{
		word_array[index] = (char *)malloc((str - word_start + 1) * sizeof(char));
		if (word_array[index] == NULL)
		{
			for (i = 0; i <= index; i++)
			{
				free(word_array[i]);
			}
			free(word_array);
			return NULL;
		}
		_strncpy(word_array[index], word_start, str - word_start);
		word_array[index][str - word_start] = '\0';
		index++;
	}

	word_array[index] = NULL;

	return word_array;
}

/**
 * free_word_array - Frees memory allocated for an array of strings.
 * @word_array: The array of strings
 *
 * Return: nothing
 */
void free_word_array(char **word_array)
{
	int i;

	if (word_array != NULL)
	{
		for (i = 0; word_array[i] != NULL; i++)
		{
			free(word_array[i]);
		}
		free(word_array);
	}
}
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 *
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
