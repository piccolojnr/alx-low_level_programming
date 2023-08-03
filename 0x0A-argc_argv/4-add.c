#include <stdio.h>
#include <stdlib.h>
int is_positive_number(char *s);
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (!num)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			if (!is_positive_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_positive_number - checks if a number is positive
 * @s: string
 *
 * Return: 1 if true, 0 if false
 */
int is_positive_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}


