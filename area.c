#include<stdio.h>
#define pi 3.14
int main()
{
    int n;
    float a,b,r,area;
    printf("1.Area of Triangle\n2.Area of Circle\n3.Area of Rectangle\n4.Area of Square\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:printf("\nEnter the base and height:");
        scanf("%f%f",&a,&b);
        area=0.5*a*b;
        printf("\nArea=%f\n",area);
        break;
    case 2:printf("\nEnter the radius:");
        scanf("%f",&r);
        area=pi*r*r;
        printf("\nArea=%f\n",area);
    case 3:printf("\nEnter the length and breadth:");
        scanf("%f%f",&a,&b);
        area=a*b;
        printf("Area=%f\n",area);
    case 4:printf("\nEnter the side:");
        scanf("%f",&a);
        area=a*a;
        printf("Area=%f\n",area);
    
    default:
    printf("Wrong Input.....");
        break;
    }
}