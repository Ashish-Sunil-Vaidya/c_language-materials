#include <stdio.h>

int main()
{
    char s[50];
    printf("Enter any string:\n");
    //gets(s);
    scanf("%s",&s);
    int *ptr;
    ptr = &s;
    /*
    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    */
   printf("Entered string: %s",ptr);
   return 0;

}