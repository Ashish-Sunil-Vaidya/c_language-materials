// 9
// 8  7
// 6  5  4
// 3  2  1  0

#include<stdio.h>

void main()
{
int i,j,cnt=9;

for(i=0;i<4;++i)
{   
    printf("\n");
    for(j=1;j<=i+1;++j,--cnt)
    printf(" %d ",cnt);
}

}