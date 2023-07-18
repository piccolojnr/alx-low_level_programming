#include <stdio.h>
/**
 * main - prints the 50 fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	unsigned long fib[50];

	fib[0] = 1;
	fib[1]  = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		printf("%lu", fib[i]);
		if (i < 49)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);

}
