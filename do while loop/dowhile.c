#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=6,b=4,ans=0;
do
{
ans=ans+a;
b--;
}
while(b>0);
printf("\nans=%d",ans);
return 0;
}