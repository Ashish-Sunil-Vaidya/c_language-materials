    // a
    // a  b
    // a  b  c
    // a  b  c  d
    // a  b  c  d  e


#include<stdio.h>

void main()
{
     int i,j;
     char ch='a';

    for(i=0;i<=5;++i){
        ch = 'a';
        printf("\n");

        for(j=0;j<i;++j,++ch)
        printf(" %c ",ch);
    }
}
