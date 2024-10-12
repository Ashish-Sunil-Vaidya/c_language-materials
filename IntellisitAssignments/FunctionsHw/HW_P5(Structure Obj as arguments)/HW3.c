//WAP to find out the difference between 2 Times using structure to the function.

#include <stdio.h>

struct Time
{
    int hr,min,sec;
}t1,t2;

typedef struct Time T;

void diff_time(T t1, T t2)
{
int D_hr=t1.hr-t2.hr;
int D_min,D_sec;

if(t2.min>t1.min)
{
    --D_hr;
    D_min=(60+t1.min)-t2.min;
}

else D_min=t1.min-t2.min;

if(t2.sec>t1.sec)
{
    --D_min;
    D_sec=(60+t1.sec)-t2.sec;
}

else D_sec=t1.sec-t2.sec;

  printf("Time Difference: %d hrs - %d min - %d sec",D_hr,D_min,D_sec);
}

int main()
{

printf("Enter first Time [H-M-S] : ");
scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);

printf("Enter second Time [H-M-S] : ");
scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);

diff_time(t1,t2);

return 0;
}