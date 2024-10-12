#include<stdio.h>
#include <stdlib.h>
void main()
{
long int i, no,*dno1,*dno2;

dno1=(long int*)calloc(i,sizeof(long int));
dno2=(long int*)calloc(i,sizeof(long int));
printf("Enter a integer: ");
scanf("%d",&no);

for(i=0;i<=no;++i)
*(dno1+i)=2*i-1;

for(i=0;i<=no;++i)
*(dno2+i)=2*i;

for(i=0;i<=no;++i)
{
if(no==*(dno2 + i))  { printf("The number %d is even",no); break;}
if(no==*(dno1 + i))  {printf("The number %d is odd",no); break;}
}

}

// void main()
// {
//     int no;
//     printf("Enter a integer: ");
//     scanf("%d",&no);

//     if((no/2)*2==no) printf("The number %d  is even",no);
//     else printf("The number  %d  is odd",no);
// }