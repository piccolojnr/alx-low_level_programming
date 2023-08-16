#include "3-calc.h"
/**
 * main - checks code
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
    int a, b, result;
    if (argc < 4)
        return 0;
    a = atoi(argv[1]);
    b = atoi(argv[3]);

    result = get_op_func(argv[2])(a, b);
    printf("%d\n", result);

    return 0;
}
