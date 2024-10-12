//         A
//       B   B
//     C   C   C
//   D   D   D   D
// E   E   E   E   E

#include<stdio.h>

void main()
{
int i,j,k;
char c='A';


   for(k=0;k<5;++k,++c)//star column 
   {
    printf("\n");
   for(i=5;i>k;--i)//whitspace pattern after than next to it star pattern
    {
      printf("  ");
    }
    for(j=0;j<=i;++j)
    {
    printf("%c   ",c);//Star row
    }
   }
    }