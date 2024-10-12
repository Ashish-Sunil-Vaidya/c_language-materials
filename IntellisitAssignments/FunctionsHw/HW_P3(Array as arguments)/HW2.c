//WAP to find minimum and maximum value present in 2 arrays, using a function.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int max_1();
int max_2();
int min_1();
int min_2();

void main()
{
int n,*arr1,*arr2;

printf("Size: ");
scanf("%d",&n);

arr1=(int*)malloc(n*sizeof(int));
arr2=(int*)malloc(n*sizeof(int));

printf("Input array 1: ");
for(int i=0;i<n;i++)
scanf("%d",&arr1[i]);

printf("Input array 2: ");
for(int i=0;i<n;i++)
scanf("%d",&arr2[i]);

 if(max_1>max_2) printf("\nArray 1 having maximum value among 2, Value: %d\n",max_1(n,arr1));
 else printf("\nArray 2 having maximum value among 2, Value: %d\n",max_2(n,arr2));

 if(min_1<min_2) printf("\nArray 1 having minimum value among 2, Value: %d\n",min_1(n,arr1));
 else printf("\nArray 2 having minimum value among 2, Value: %d\n",min_1(n,arr2));
}

int max_1(int n, int arr1[])
{
    int max1;

     
    max1 = arr1[0];
    for(int i = 1; i < n; ++i)
        if(arr1[i] > max1)
            max1 = arr1[i];
    return max1;

}

int max_2(int n, int arr2[])
{
    int max2;

     
    max2 = arr2[0];
    for(int i = 1; i < n; ++i)
        if(arr2[i] > max2)
            max2 = arr2[i];
    return max2;

}

int min_1(int n, int arr1[])
{
    int min1;

     
    min1 = arr1[0];
    for(int i = 1; i < n; ++i)
        if(arr1[i] < min1)
            min1 = arr1[i];
    return min1;

}

int min_2(int n, int arr2[])
{
    int min2;

     
    min2 = arr2[0];
    for(int i = 1; i < n; ++i)
        if(arr2[i] < min2)
            min2 = arr2[i];
    return min2;

}

