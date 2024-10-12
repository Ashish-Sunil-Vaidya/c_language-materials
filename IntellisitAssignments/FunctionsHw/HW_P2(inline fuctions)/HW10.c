//WAP to find out the average of the elements of an array, using a function.

#include<stdio.h>

int average(int SIZE, int array[])
{
    int i,sum=0,avg;

    for(i=0;i<SIZE;++i)
    sum+=array[i];

    avg=sum/SIZE;

    return avg;

}



void main()
{
int i,array[100],SIZE;
printf("Enter size of the array: ");
scanf("%d",&SIZE);
printf("Enter array elements: ");
for(i=0;i<SIZE;++i)
scanf("%d",&array[i]);

printf("Average: %d",average(SIZE,array));
}