//WAP to search for an element in the given array using a function.
#include<stdio.h>

#define SIZE 10

int search(int array[],int find)
{ 
    int i,loc;
    for(i=0;i<SIZE;++i)
        if(array[i]==find) 
           loc=i;
    
    return loc;
 
}

void main()
{   
    int array[SIZE],i,find;

    printf("Enter %d elements: ",SIZE);
    for(i=0;i<SIZE;++i)
    scanf("%d",&array[i]);

    printf("Enter the number you want to find the location in your array: ");
    scanf("%d",&find);

    printf("The element '%d' is located at index %d",find,search(array,find));
    

}