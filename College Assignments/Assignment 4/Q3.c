//(Q.3)Write a C program to print all even numbers between 1 to 100 using do while loop
//F-60 Ashish Vaidya
#include <stdio.h>
#include <stdlib.h>

int main()
{
int ans=1;
printf("\nEven numbers are:");

do
{
if(ans%2==0)
{
printf("%d ",ans);
}
ans++;
}
while(ans<=100);

return 0;

}