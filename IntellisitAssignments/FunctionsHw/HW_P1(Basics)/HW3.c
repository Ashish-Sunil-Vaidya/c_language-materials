//WAP to perform Relational Operations using functions (menu Driven Program)

#include <stdio.h>

int no1, no2, result;

void Equalto()
{

    printf("\nEnter 2 numbers:");
    scanf("%d %d", &no1, &no2);
    result = no1 == no2;
    printf("\n%d is equal to %d : %d\n\n", no1, no2, result);
}

void NotEqualto()
{
   
    printf("\nEnter 2 numbers:");
    scanf("%d %d", &no1, &no2);
    result = no1 != no2;
    printf("\n%d is not equal to %d : %d\n\n", no1, no2, result);
}

void Greater()
{
    printf("\nEnter 2 numbers:");
    scanf("%d %d", &no1, &no2);
    result = no1 > no2;
    printf("\n%d is greater than %d : %d\n\n", no1, no2, result);
}

void Less()
{

    printf("\nEnter 2 numbers:");
    scanf("%d %d", &no1, &no2);
    result = no1 < no2;
   printf("\n%d is less than %d : %d\n\n", no1, no2, result);
}

void GreaterthanEqualto()
{
    printf("\nEnter 2 numbers:");
    scanf("%d %d", &no1, &no2);
    result = no1 >= no2;
    printf("\n%d is greater than or is equal to %d : %d\n\n", no1, no2, result);
}

void Lessthanequalto()
{
    
    printf("\nEnter 2 numbers:");
    scanf("%d %d", &no1, &no2);
    result = no1 <= no2;
    printf("\n%d is less than or is equal to %d : %d\n\n", no1, no2, result);
}

void menu()
{
     int option;

do
{   
    printf("Press 1 for 'Equal to' operation\nPress 2 for 'Not Equal to' operation\nPress 3 for 'Greater than' operation\nPress 4 for 'Less than' operation\nPress 5 for 'Greater than equal to' operation\nPress 6 for 'Less than equal to' operation\nPress 0 to exit\n\n");
    scanf("%d",&option);

    switch (option)
    {
    case 0: printf("Program exit");
    return;
    break;

    case 1: Equalto();
    break;

    case 2: NotEqualto();
    break;

    case 3: Greater();
    break;

    case 4: Less();
    break;

    case 5: GreaterthanEqualto();
    break;

    case 6: Lessthanequalto();
    break;

    default: printf("Invalid option...");
    break;
    }

}while (option);

}

void main()

{
   menu();
}





