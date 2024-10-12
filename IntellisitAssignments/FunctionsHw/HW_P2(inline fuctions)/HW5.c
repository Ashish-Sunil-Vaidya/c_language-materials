//	WAP to reverse a number using a function.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(int size,int array[])
{
    

int i,j=0,reverse[20];

printf("The reverse of the array is: ");
for(i=size-1;i>=0;--i,++j){
reverse[j]=array[i];

printf("%d ",reverse[j]);

}
}

void main()
{ 
    int i,size,array[20],r;

    printf("Enter size of the array: ");
scanf("%d",&size);

printf("Enter %d elements: ",size);
for(i=0;i<size;++i)
scanf("%d",&array[i]);

reverse(size,array);

}
