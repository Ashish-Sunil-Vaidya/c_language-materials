#include <stdio.h>
#include <stdlib.h>

void main()
{
    int flag,EvenOdd,PositiveNegative,n,m,i,option,menu;


    do{
    printf("Select an Option:\n[1] for Even oven or Odd\n[2] for Positive or negative\n[3] for prime or not prime\n\n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        printf("\nEnter an positive integer\n");
        scanf("%d",&EvenOdd);
        if(EvenOdd%2)
        printf("The number %d is Odd",EvenOdd);
        else 
        printf("The integer %d is Even",EvenOdd);    
        break;

    case 2:
        printf("\nEnter any integer\n");
        scanf("%d",&PositiveNegative);
        if(PositiveNegative>0)
        printf("The integer %d is positive",PositiveNegative);
        else 
        printf("The integer %d is Negative",PositiveNegative);    
        break;

    case 3:
        printf("Enter the number to check prime:\n");    
        scanf("%d",&n);    
        m=n/2;    
        for(i=2;i<=m;i++)      
        if(n%i==0)    
        {    
        printf("Number is not prime");    
        flag=1;    
        break;    
        }
      
        if(flag==0)    
        printf("Number is prime"); 
        break; 

        default:
        printf("Option [%d] does not exist",option);
        break;
    }
    printf("\n\nPress[1] to Retry or Press[0] to Exit-->",menu);
    scanf("%d",&menu);
    }while(menu);
    }

        
