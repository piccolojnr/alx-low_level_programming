#include "main.h"

int _strlen(char *s);

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t len;
	size_t written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	len = _strlen(text_content);
	written = fwrite(text_content, sizeof(char), len, file);
	fclose(file);

	if (written == len)
		return (1);
	else
		return (-1);
}
