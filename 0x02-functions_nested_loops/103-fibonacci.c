#include <stdio.h>
/**
 * main - prints the sum of the even fubunacci numbers
 * below 4000000
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long sum = 0;

	unsigned long prev = 1;

	unsigned long curr = 2;

	unsigned long next = prev + curr;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
			sum += curr;

		next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("%lu\n", sum);

	return (0);

}
