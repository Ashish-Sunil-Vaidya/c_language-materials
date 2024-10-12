//WAP to find the average value from the given array, using a function.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void avg_value(int n,int arr[]);


void main()
{
    int n,*arr;

    printf("Enter size of array: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("The array: ");
    for(int i=0; i<n; i++)
    printf("%d ",arr[i]);
    
    avg_value(n,arr);
    
    // avg=0;
    
    // for(int i=0;i<n;i++)
    // avg=avg+arr[i];
    // avg=avg/n;
    

    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==avg)
    //     {
    //     printf("\nThe average value is %d is on index %d\n",avg,i);
    //     }
    // }
}


void avg_value(int n,int arr[])
{
    int avg=0;
    
    for(int i=0;i<n;i++)
    avg=avg+arr[i];

    avg=avg/n;

 for(int i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
        printf("\nThe average value is %d is on index %d \n",avg,i);
        }

      
    }
 
}



