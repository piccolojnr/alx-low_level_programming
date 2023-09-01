#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: index
 *
 * Return: value at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int value;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

value = n >> index;

return (value & 1);
}

