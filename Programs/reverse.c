#include<stdio.h>
int main()
{
    int n,s,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        s=n%10;
        rev=rev*10 + s;
        n=n/10;
    }printf("Reverse=%d\n",rev);
    return 0;
}