#include<stdio.h>
void main()
{
    float time;
    printf("\nEnter current time (24 hrs format):");
    scanf("%f", &time); // 8.15
    if(time >= 5.0 && time < 12.0)
        printf("\nGood morning. It's a beautiful day today.");
    printf("\nThank you.");
}
