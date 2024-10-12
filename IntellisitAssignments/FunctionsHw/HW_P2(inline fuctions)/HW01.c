//WAP to check whether the given integer value is Prime or not.

#include<stdio.h>
#include<math.h>

int prime(int no)
{
    int cnt;


    for( cnt = 2; cnt <= sqrt(no); ++cnt)
    {
        if(no % cnt == 0)
        {
            printf("Number %d is NOT a PRIME Number.", no);
            return no;
        }
    }
    printf("Number %d is a PRIME Number.", no);

}


void main()
{
int n;
printf("Enter an integer: ");
scanf("%d",&n);

prime(n);
}

