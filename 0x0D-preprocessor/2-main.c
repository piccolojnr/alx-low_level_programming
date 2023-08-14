#include <stdio.h>
/**
* main - prints the name of the file it was compiled from
*/

int main() {
    printf("Compiled from file: %s\n", __FILE__);
    return 0;
}

