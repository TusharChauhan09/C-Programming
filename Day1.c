// Day 1

#include <stdio.h>
int main()
{

    /*
       printf("Hello World");

        printf("\n");                                                            // (1) Escape Sequence

        printf("Hello \n");


        int x =5;                                                               // (2) Variable and Their Declaration
        printf("%d",x);



        printf("\n");
        x=7;
        printf("%d",x);
        printf("\n");
        x=x-6;
        printf("%d",x);


        int x=5;
        int y=2;
        printf("%d\n",x+y);                                                   // (3) Arithamatic Operators on int data type
        printf("%d\n",x-y);
        printf("%d\n",x*y);
        printf("%d\n",x/y);



        float x=5;                                                           // (4) Float Data
        float y=2;
        printf("%f",x/y);


        float r=5;                                                          //E.g Program to calculate the volume of a sphere
        float v=4*3.1415*r*r*r;
        printf("This Is The Volume Of A Sphere : %f",v);


        float x1=90;                                                       //E.g Program to calculator percentage
        float x2=90;
        float x3=83;
        float x4=92;
        float x5=81;
        float total=(x1 + x2 + x3 + x4+ x5 )/5;
        printf("Percentage : %f",total);


        float r;                                                          // (5) Input by scan("",&)
        printf("Enter The Value Of r:");
        scanf(" %f",&r);
        float pi=3.1415;
        float area=4*pi*r*r;
        printf("This Is The Volume Of Circle : %f",area);


        float x;
        float y;
        printf("Enter 1st no.");
        scanf("%f",&x);
        printf("Enter 2nd no.");
        scanf("%f",&y);
        printf("Your Sum Is : %f",x+y);



        int a,b;                                                           // E.g a>b and a/b then find the remainder
        printf("Enter 1st value");
        scanf("%d",&a);
        printf("Enter 2nd value");
        scanf("%d",&b);
        int q=a/b;
        int r=a-b*q;
        printf("Your remaninder when %d is divided by %d is : %d ",a,b,r );


       int a,b;
        printf("Enter 1st value");
        scanf("%d",&a);
        printf("Enter 2nd value");
        scanf("%d",&b);
        int r=a%b;
        printf("Your remaninder when %d is divided by %d is : %d ",a,b,r );


    */

    float x;                                                              // E.g float to int and int to float
    printf("Enter the no.");
    scanf("%f", &x);
    int y = x;
    float z = x - y;
    printf("%f", z);

    return 0;
}
