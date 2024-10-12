#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    //printf("Enter five numbers:\n");
    //scanf("%d",&arr);
    int i=0,sum=0;
    int *p;
    p=&arr;
    while(i<5)
    {
        sum= sum + *p;
        i++;
        p++;
    }
    printf("Addition of Numbers: %d",sum);
    return 0;
}