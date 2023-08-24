// Day 4

#include <stdio.h>
int main()                                                                           // (1) Control Loops
{   
/*
    for(int i=1 ; i<=4 ; i=i+1 )                                                     // (1.a) For Loop
    {
        printf("Hello World \n");
    }

          
    int n;                                                                           // E.g
    printf("Enter how many times you want to print : ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i=i+1 )                                                    
    {
        printf("Hello World \n");
    }


    for(int i=1; i<=100; i++)                                                        // E.g    
    {
        printf("%d \n",i);
    }


     for(int i=1; i<=100; i++)                                                        // E.g    
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }


    for(int i=1; i<=10; i++)                                                         // E.g    
    {
        printf("%d \n", 19*i );
    }


    int n;                                                                           // E.g 
    printf("Enter the no. whose table you want : ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++)                                                          
    { 
        printf(" %d \n",n*i);
    }



    int n;                                                                           // A.P E.g 
    printf("Enter the value of n(th) term : ");
    scanf("%d",&n);

    for(int i=1; i<=2*n-1; i=i+2)
    {
        printf("%d \n",i);
    }


    int n;                                                                           // A.P E.g Without Maths
    printf("Enter the value of n(th) term : ");
    scanf("%d",&n);
    int a =1 ;

    for(int i=1; i<=n; i++)
    {
        printf("%d \n",a);
        a=a+2;
    }


     int n;                                                                           // G.P E.g Without Maths
    printf("Enter the value of n(th) term : ");
    scanf("%d",&n);
    int a =1 ;

    for(int i=1; i<=n; i++)
    {
        printf("%d \n",a);
        a=a*2;
    }


    int a =100 ;                                                                      //A.P E.g
    for (int i=1 ; a>0 ; i++)                                                      
    {
        printf("%d \n",a);
        a=a-3;
    }

*/

    int x;
    printf("Enter a no. : ");
    scanf("%d",&x);

    for(int i=2; i<=x-1; i++)
    {
        if(x%i==0)
        {
            printf("%d is a composite no. ",x);
            break;
        }
        
        else
        {
            printf("%d is a prime no.",x);
            break;
        }    
    }

   

    return 0;
}