#include <stdio.h>
#include <stdlib.h>
/**
 * main  - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
