 
//  1  
//  1  2 
//  1  2  3 
//  1  2  3  4 
//  1  2  3  4  5 

#include<stdio.h>

void main()
{
     int i,j;

    for(i=0;i<5;++i){

        printf("\n");

        for(j=1;j<=i+1;++j)
        printf(" %d ",j);
    }
}