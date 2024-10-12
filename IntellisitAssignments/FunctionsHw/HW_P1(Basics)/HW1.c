//WAP to perform Arithmetic Operations using functions (menu driven program).
#include<stdio.h>

int n1,n2,op;

void add()
{
printf("\nEnter two numbers: ");
scanf("%d%d",&n1,&n2);
op=n1+n2;
printf("Addition = %d\n\n",op);

}

void sub()
{
printf("\nEnter two numbers: ");
scanf("%d%d",&n1,&n2);
op=n1-n2;
printf("Substraction = %d\n\n",op);
}

void mul()
{
printf("\nEnter two numbers: ");
scanf("%d%d",&n1,&n2);
op=n1*n2;
printf("Multiplication = %d\n\n",op);
}

void div()
{
printf("\nEnter two numbers: ");
scanf("%d%d",&n1,&n2);
op=n1/n2;
printf("division  = %d\n\n",op);
}

void mod()
{
printf("\nEnter two numbers: ");
scanf("%d%d",&n1,&n2);
op=n1%n2;
printf("Remainder = %d\n\n",op);
}

void menu(){
int option;

do
{
    printf("Press 1 for Addition\nPress 2 for substraction\nPress 3 for multiplication\nPress 4 for Division\nPress 5 for Remainder\nPress 0 to exit\n\n");
    printf("Enter here--> ");
    scanf("%d",&option);

    switch (option)
    {
    case 0:
    printf("Program exit");
    return;
    break;

    case 1: add();
    break;

    case 2: sub();
    break;

    case 3: mul();
    break;

    case 4: div();
    break;

    case 5: mod();
    break;

    default: printf("Invalid option");
    break;
    }

}while (option);

}

void main()
{
menu();
}
