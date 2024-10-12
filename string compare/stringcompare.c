#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[20]="WIT";
    char str2[10]="CSE";
    //printf("lower case =%s",strlwr(str1));

    if(strcmp(str1,str2)==0)
    {
        printf("string 1 and 2 are equal\n");
    }
    else
    {
        printf("string 1 and 2 are different\n");
    }

    return 0;
}