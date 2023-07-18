#include <stdio.h>
/**
 * main - prints the 98 fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	unsigned long fib[98];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 98; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 98; i++)
	{
		printf("%lu", fib[i]);
		if (i < 97)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);

}
