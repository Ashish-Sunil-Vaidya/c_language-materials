#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{   
    int no;
    char CharNo[1000];
    printf("Enter a number: ");
    scanf("%d",&no);

    if(no%10==0) 
    {
        switch(no/10)
        {
        case 1: CharNo={"Ten "}; break;
        case 2: CharNo="Twenty "; break;
        case 3: CharNo="Thirty "; break;
        case 4: CharNo="Fourty "; break;
        case 5: CharNo="Fifty "; break;
        case 6: CharNo="Sixty "; break;
        case 7: CharNo="Seventy "; break;
        case 8: CharNo="Eighty "; break;
        case 9: CharNo="Ninety "; break;
        }
        
    }

    printf("%d",CharNo[0]);
}