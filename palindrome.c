#include<stdio.h>
int main()
{
    int n,s,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        s=n%10;
        rev=rev*10 + s;
        n=n/10;
    }
    if(temp==rev){
        printf("%d is palindrome\n",rev);
    }
    else
    printf("%d is not palindrome\n",rev);
    return 0;
}