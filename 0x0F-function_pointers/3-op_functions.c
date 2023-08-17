#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: a
 * @b: b
 * Returns: sum of a and b
 */
int op_add(int a, int b)
{
   return (a + b);
}
/**
 * op_sub - returns the sum of a and b
 * @a: a
 * @b: b
 * Returns: subtraction of a and b
 */
int op_sub(int a, int b)
{
   return (a - b);
}
/**
 * op_mul - returns the ultmiplicationm of a and b
 * @a: a
 * @b: b
 * Returns: multiplication of a and b
 */
int op_mul(int a, int b)
{
   return (a * b);
}
/**
 * op_div - returns the division of a and b
 * @a: a
 * @b: b
 * Returns: division of a and b
 */
int op_div(int a, int b)
{
   if (b == 0)
   {
      printf("Error\n");
      exit(100);
   }

   return (a / b);
}
/**
 * op_mod - returns the modulo of a and b
 * @a: a
 * @b: b
 * Returns: modulo of a and b
 */
int op_mod(int a, int b)
{
   if (b == 0)
   {
      printf("Error\n");
      exit(100);
   }

   return (a % b);
}
