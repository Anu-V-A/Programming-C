#include<stdio.h>
int main()
{
    int a=5,b=2;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are a=%d ,b=%d\n",a,b);
    return 0;
}