#include "m.h"
#include <stdio.h>
int school()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d b=%d\n",a,b);
    return (0);
}