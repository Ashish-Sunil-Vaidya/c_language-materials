#include <stdio.h>

void hanoi(int,char,char,char);

int main()
{
    int num;
    printf("Enter the Number of Discs:\n");
    scanf("%d",&num);
    printf("The Tower of Hanoi with %d discs can be solved as follows:\n",num);
    hanoi(num, 'A','C','B');
    return 0;
}

void hanoi(int num, char from ,char to,char other)
{
    if(num<=0)
    {
        printf("Illegal number of disks");
        return ;
    }

    else if(num==1)
    {
        printf("Move disk 1 from %c to %c\n",from,to);
        return;
    }

    hanoi(num-1,from,other,to);
    printf("Move disk %d from %c to %c\n",num,from,to);
    hanoi(num-1,other,to,from);

}