#include <stdio.h>
#include <stdlib.h>
/**
 * main  - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{

	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}

		while (cents > 0)
		{
			coins++;

			if ((cents - 25) >= 0)
				cents -= 25;
			else if ((cents - 10) >= 0)
				cents -= 10;
			else if ((cents - 5) >= 0)
				cents -= 5;
			else if ((cents - 2) >= 0)
				cents -= 2;
			else if ((cents - 1) >= 0)
				cents -= 1;
			else
				break;
		}
		printf("%d\n", coins);
	}

	return (0);
}
