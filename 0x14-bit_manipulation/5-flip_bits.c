#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int num = 0;

    while (n || m)
    {
        if ((n & 1) != (m & 1))
            num++;

        n = n >> 1;
        m = m >> 1;
    }

    return (num);
}
