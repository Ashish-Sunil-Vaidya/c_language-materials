//WAP to find the binary of the given integer value using a function.

#include<stdio.h>

void binary_convert(int num)
{
int dummynum,tempdummy,binary[20],refdummy[20],i=0,j=0,cnt=0;
dummynum=num;
tempdummy=num;

while(dummynum!=0)
{   
    
    refdummy[i]=tempdummy%2;
    // printf("%d",refdummy[i]);
    dummynum/=2;
    tempdummy=dummynum;
    ++i;
    cnt=i;
}

while(cnt>0)
{
binary[j]=refdummy[cnt-1];
printf("%d",binary[j]);
--cnt;++j;

}
}


void main()
{

int num,dummynum,tempdummy,binary[20],refdummy[20],i,j=0,cnt=0;
printf("Enter a integer: ");
scanf("%d",&num);


printf("\nBinary of %d is: ",num); 
binary_convert(num);

}