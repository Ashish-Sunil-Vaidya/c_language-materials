#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[20]="WIT";
    char str2[10]="CSE";
    //printf("lower case =%s",strlwr(str1));
    strncat(str1,str2,1);
    printf("%s",str1);


    return 0;
}