#include<stdio.h>
#include<math.h>
int main(){

    int n,s,temp,arm=0,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        n=n/10;
        count++;
    }
    n=temp;
     while(n>0){
        s=n%10;
        arm+=pow(s,count);
        n=n/10;
    }
    if(arm==temp){
    printf("%d is Armstrong\n",arm);
    }

    else
    printf("%d is Not Armstrong\n",arm);

    return 0;
}