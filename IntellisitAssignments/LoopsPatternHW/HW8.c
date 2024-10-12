//         *
//       *   *
//     *   *   *
//   *   *   *   *
// *   *   *   *   *

#include<stdio.h>

void main()
{
int i,j,k;


   for(k=0;k<5;++k)//star column 
   {
    printf("\n");
   for(i=5;i>k;--i)//whitspace pattern after than next to it star pattern
    {
      printf("  ");
    }
    for(j=0;j<=i;++j)
    {
    printf("*   ");//Star row
    }
   }
    }


