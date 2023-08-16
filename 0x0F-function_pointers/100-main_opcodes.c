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
        if (i == numBytes - 1)
        {
            printf("%02hhx\n", ptr[i]);
            break;
        }
        printf("%02hhx ", ptr[i]);
    }

    printf("\n");

    return (0);
}
