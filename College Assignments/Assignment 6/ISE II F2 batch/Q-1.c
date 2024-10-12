/*C program to check whether an alphabet is vowel
   or consonant using switch case */
   //F-60 Ashish Vaidya
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a;
    printf(" Enter any Alphabet : ");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf(" Alphabet '%c' is Vowel.\n",a);
            break;
        default:
            printf(" Alphabet '%c' is Consonant.\n",a);
            break;
    }
    return 0;
}
