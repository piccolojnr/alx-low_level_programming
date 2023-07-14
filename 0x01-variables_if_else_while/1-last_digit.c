#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry pint of program
 *
 * Description: Assigns a random number to the variable
 * n and prints the last digit of the number stored in the variable
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("The last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else if (last_digit < 6 && last_digit > 0)
		printf("less than 6 and not 0\n");
	return (0);
}
