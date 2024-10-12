//WAP to merge two given arrays into one.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input();
void merge();


void main()
{

int n,*arr1,*arr2;

arr1=(int*)malloc(n*sizeof(int));
arr2=(int*)malloc(n*sizeof(int));

printf("Size: ");
scanf("%d",&n);

input(n,arr1,arr2);
merge(n,arr1,arr2);

}



void input(int n,int arr1[],int arr2[])
{



printf("Input array 1: ");
for(int i=0;i<n;i++)
scanf("%d",&arr1[i]);

printf("Input array 2: ");
for(int i=0;i<n;i++)
scanf("%d",&arr2[i]);

}



void merge(int n,int arr1[],int arr2[])
{   
    
    int j=0;
    for(int i=n;i<n+n;i++)
    {
        arr1[i]=arr2[j];
        ++j;
    }
    
    printf("Merged array: ");
    for(int i=0;i<n+n;++i)
    printf("%d",arr1[i]);
}
