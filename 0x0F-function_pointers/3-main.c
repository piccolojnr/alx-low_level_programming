#include "3-calc.h"
#include <stddef.h>
/**
 * main - checks code
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
    int a, operator, b, (*operation)(int, int), result;
    if (argc < 4)
        return 0;

    a = atoi(argv[1]);
    operator= atoi(argv[2]);
    b = atoi(argv[3]);

    operation = get_op_func(operator);
    if (operation == NULL)
        return 0;

    result = operation(a, b);

    printf("%d\n", result);

    return 0;
}
