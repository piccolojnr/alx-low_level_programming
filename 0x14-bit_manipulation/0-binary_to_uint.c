#include "main.h"

unsigned int power(int base, int exp);
/**
 * power - calculates the power of a number
 * @base: base of the number
 * @exp: exponent of the number
 *
 * Return: the power of the number
 */
unsigned int power(int base, int exp)
{
    int i;
    unsigned int res = 1;
    for (i = 0; i < exp; i++)
        res *= base;

    return (res);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int res = 0;
    int len = 0, base = 2, i;

    if (b == NULL)
        return (0);

    while (b[len] != '\0')
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        if (b[i] == '1' || b[i] == '0')
        {
            unsigned int v = b[i] - '0';
            res += v * power(base, len - i - 1);
        }
        else
            return (0);
    }

    return (res);
}
