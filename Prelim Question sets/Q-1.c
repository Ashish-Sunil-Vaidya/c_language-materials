#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d",&n);
    printf("\n");
    
    switch (n)
    {
    case 1:

    printf("1");
    break;

    case 2:
    printf("2 2 2\n");
    printf("2 1 2\n");
    printf("2 2 2\n");
    break;

    case 3:
    printf("3 3 3 3 3\n");
    printf("3 2 2 2 3\n");
    printf("3 2 1 2 3\n");
    printf("3 2 2 2 3\n");
    printf("3 3 3 3 3\n");
    break;

    case 4:
    printf("4 4 4 4 4 4 4\n");
    printf("4 3 3 3 3 3 4\n");
    printf("4 3 2 2 2 3 4\n");
    printf("4 3 2 1 2 3 4\n");
    printf("4 3 2 2 2 3 4\n");
    printf("4 3 3 3 3 3 4\n");
    printf("4 4 4 4 4 4 4\n");
    break;

    default:
    printf("Matrix does not exists\n");
    }

    return 0;
}