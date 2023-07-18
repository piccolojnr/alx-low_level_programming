#include "main.h"
/**
 * _abs - Entry point of program
 *
 * Description: computes absolute value of an integer
 * @num:int value
 *
 * Return: int (Success)
 */
int _abs(int num)
{
	if (num > 0)
		return (num);
	else
		return (-num);
}
