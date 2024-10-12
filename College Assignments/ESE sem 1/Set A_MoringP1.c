#include <stdio.h>
#include <string.h>

int main()
{
  char name[10],namecpy[10];

fgets(name,10,stdin);
strcpy(namecpy,name);
strrev(name);
int val=strcmp(namecpy,name);
if(val==0)
printf("The name is palindrome");
else
printf("The string is not the palindrome\n");


}