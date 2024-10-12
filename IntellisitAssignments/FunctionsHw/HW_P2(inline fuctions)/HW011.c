//	WAP to reverse the given array, using function.
#include<stdio.h>


void array_reverse(int size, int array1[],int array2[])
{
    int i,j=0;
    for(i=size-1;i>=0;--i,++j)
    array2[j]=array1[i];
}



void main()
{
int i,size,array1[100],*ptr,array2[100];
printf("Enter the size of the array:  ");
scanf("%d",&size);

printf("Enter the elments in the array: ");
for(i=0;i<size;++i)
scanf("%d",&array1[i]);


printf("Reverse: ");
array_reverse(size,array1,array2);
for(i=0;i<size;++i)
printf("%d ",array2[i]);



}