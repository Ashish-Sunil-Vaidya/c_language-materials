//WAP to accept a string from the user and count the number of vowels present in it.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// void main()
// {
//     char str[10];
//     int i,cnt=0;

//     printf("Enter a string: ");
//     scanf("%s",str);

//     for(i=0;str[i]!='\0';++i)
//    { 
//     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='U') ++cnt;
//    }
//     printf("Number of Vowels= %d", cnt);


void main()
{  int cnt=0,i;
   char str[100];
    printf("Enter string: ");
    gets(str);

    for(i=0;str[i]!='\0';++i)
    {
        switch(str[i])
        {
           case 'a': ++cnt; break;
           case 'e': ++cnt; break;
           case 'i': ++cnt; break;
           case 'o': ++cnt; break;
           case 'u': ++cnt; break;
           case 'A': ++cnt; break;
           case 'E': ++cnt; break;
           case 'I': ++cnt; break;
           case 'O': ++cnt; break;
           case 'U': ++cnt; break; 

        }
    }
    printf("No of vowels: %d",cnt);
}