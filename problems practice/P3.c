#include <stdio.h>
#include <stdlib.h>

int max(int* a, int* b);

void main()
{
int x=1,y=4;    
max(&x,&y);
}

int max(int *a,int *b)
{
    
if(*a>*b) printf("a has the maximum value",*a);
else printf("b has the maximum value",*b);

}

