#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numBytes, i;
    unsigned char *ptr;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    numBytes = atoi(argv[1]);
    if (numBytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    ptr = (unsigned char *)main;

    for (i = 0; i < numBytes; i++)
    {
        printf("%02x", ptr[i]);
        if (i != numBytes - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return (0);
}
