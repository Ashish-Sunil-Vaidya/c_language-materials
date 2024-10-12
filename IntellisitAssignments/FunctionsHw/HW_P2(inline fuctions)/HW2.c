//WAP to check whether the given integer is armstrong.
#include<stdio.h>

int armstrong(int num)
{


 int originalNum, remainder, result = 0;

    originalNum = num;

    while (originalNum != 0) {

        remainder = originalNum % 10;

       result += remainder * remainder * remainder;

       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);



}
void main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    armstrong(n);

}
