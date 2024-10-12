#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr,i;
    int *s;
    ptr =&arr;
    s = &arr;

    for(i=0;i<5;i++)
    {
        printf("Array locataion of [%d] : %p\n",i+1,*ptr);
        ptr++;
    }

    for(i=0;i<5;i++)
    {
        printf("The array[%d]= %d\n",i+1,*s);
        s++;
    }
    return 0;
}