#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
int seatno,fseatno,i,boggieno,cnt=0;
do{
printf("\nEnter Seatno: ");
scanf("%d",&seatno);
if(seatno>0){
cnt=0;
boggieno=seatno/12;

for(i=seatno;i<=12*(boggieno+1);++i)
cnt++;

fseatno=12*boggieno+cnt;

printf("\nThe seat number in front of %d is %d",seatno,fseatno);
}

else printf("Invalid Seatno");
}while(1);
}