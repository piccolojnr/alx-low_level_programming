#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * positive_or_negative - Entry pint of program
 *
 * Description: Assigns a random number to the variable n
 * and prints wheter the number is positive, negative, or zero
 *
 * @i: The number to be checked
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	printf("%d is ", i);

	if (i > 0)
		printf("positive\n");
	else if (i == 0)
		printf("zero\n");
	else
		printf("negative\n");
}
