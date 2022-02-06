#include<stdio.h>
#include<stdlib.h>
int main()
{
    float unit;
    printf("Enter the unit:");
    scanf("%f",&unit);
    if(unit<=0){
        printf("Invalid choice");
    }
    else if(unit<=250){
        printf("Bill is %f\n",500.0000);
    }
    else if(unit<=500){
        printf("Bill is %f",500+(unit-250)*1);
    }
    else if(unit<=750){
        printf("Bill is %f",250+500+(unit-500)*2);
    }
    else if(unit<=1000){
        printf("Bill is %f",1000+250+(unit-750)*3);
    }
    else
    exit(0);
    return 0;
}