#include <stdio.h>

int main()
{
    int marks[6],i,sum=0;
    float avg;
    for(i=0;i<6;i++) {
    printf("\nEnter the marks scored:");
    scanf("%d",&marks[i]);
    sum=sum+marks[i]; 
    }
    printf("sum=%d",sum);
    avg=sum/6.0;
    printf("avg=%f",avg);
    return 0;
}