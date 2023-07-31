#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum, carry = 0;

	int i, j, k;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r - 1 || len2 >= size_r - 1)
		return (0);

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0
	     || carry > 0; i--, j--, k++)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	r[k] = '\0';

	return (r);
}
