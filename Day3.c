// Day 3

#include <stdio.h>
int main()
{
    /*

        int x;                                                                      // (1) Conditional Statement
        printf("Enter a no.");
        scanf("%d",&x);
        if(x%2==0)                                                                  //(1.a) If
        { 
            printf("Even no.");
        }
        else                                                                        //(1.b)  Else
        {
            printf("Odd no.");
        }


        int x;                                                                      //E.g
        printf("Enter The Year");
        scanf("%d",&x);
        if(x%4==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not A Leap Year");
        }


        int x;                                                                    //E.g
        printf("Enter a number");
        scanf("%d",&x);
        if(x<0)
        {
            x=x*(-1);
        }
        printf("The absolute value is : %d",x);


        int cp , sp;                                                              //E.g

        printf("Enetr Cost Price : ");
        scanf("%d",&cp);
        printf("Enter Selling Price : ");
        scanf("%d",&sp);

        if(sp>cp)
        {
            printf("Profit :" );
        }
        if(cp>sp)
        {
            printf("Loss : ");
        }
        if(cp==sp)
        {
            printf("No Profit No loss");
        }


        int x;                                                                    // (2) Logical Operators
        printf("Enter The Number : ");
        scanf("%d",&x);
        if(x>99 && x<1000)
        {
            printf("The number is a 3 digit no.");
        }
        else
        {
            printf("The number is not a 3 digit no.");
        }


        int a, b, c;                                                                // E.g
        printf("Enter the value of a : ");
        scanf("%d", &a);
        printf("Enter the value of b : ");
        scanf("%d", &b);
        printf("Enter the value of c : ");
        scanf("%d", &c);

        if (a > b && a > c)
        {
            printf("a is the greatest ");
        }
        if (b > a && b > c)
        {
            printf("b is the greatest ");
        }
        if (c > a && c > b)
        {
            printf("c is the greatest ");
        }

    

        int a, b, c;                                                                // E.g
        printf("Enter the value of a : ");
        scanf("%d", &a);
        printf("Enter the value of b : ");
        scanf("%d", &b);
        printf("Enter the value of c : ");
        scanf("%d", &c);

        if ((a + b) > c && (b + c) > a && (a + c) > b)
        {
            printf("yes , it can form a triangle");
        }
        else
        {
            printf("No, triangle can't be formed ");
        }


        int n;                                                                                // (1.d) Nested if
        printf("Enter the no. : ");
        scanf("%d",&n);
        if(n%5==0 || n%3==0)
        {
            if(n%15!=0)                                                                      
            {
                printf("The no. is divisible by 3 or 5 but not by 15");
            }
            else
            {
                printf("The no. is divisible by 3 or 5 and also by 15");
            }
        }
        else 
        {
            printf("The no is not divisible by 3 or 5");
        }


        int x;                                                                               // (1.c) Else if                                                                     
        printf("Enter the marks : ");
        scanf("%d",&x);
        if(x>=90 && x<=100)
        {
            printf("Exellent");
        }
        else if(x>=80 && x<=89)
        {
            printf("Very Good");
        }
        else if(x>=70 && x<=79)
        {
            printf("Good");
        }
        else if(x>=60 && x<=69)
        {
            printf("Can Do Better");
        }
        else if(x>=50 && x<=59)
        {
            printf("Avg");
        }
        else if(x>=40 && x<=49)
        {
            printf("Bellow Avg");
        }
        else
        {
            printf("Fail");
        }


       int x;                                                                           // (3)Ternary Operator
       printf("Enter a no. : ");
       scanf("%d",&x);

       x%2==0 ? printf("Even no.") : printf("Odd no.") ;


        int x=3;                                                                        // (4) Boolean Data Type
        printf("%d",x<10);


        int x=3,y,z;                                                                    // E.g
        y=x=10;
        z=x<10;
        printf("\nx=%d y=%d z=%d ", x,y,z);


        int i=65;                                                                      // E.g
        char j='A';
        
        if(i==j)
        {
            printf("C is WOW");
        }
        else
        {
            printf("C is headache");
        }

    */


        int a;                                                                      // (5) The Real Thing
        char ch = 'a' ;
        if(3 + 2 % 5)
        {
            printf("This Works \n");
        }
        if(a=10)
        {
            printf("This also works \n");
        }
        if(-5)
        {
            printf("Surprisingly this also works \n");
        }
        if(ch = 'g')
        {
            printf("Works ?");
        }
        

    return 0;
}
