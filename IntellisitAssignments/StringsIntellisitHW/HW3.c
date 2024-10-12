//WAP to concatenate 2 strings, without using built-in functions.
#include<stdio.h>
#include<stdlib.h>


void main()
{
char str1[30],str2[10];
int lenght,i;
printf("Enter String 1: ");//input from the user
scanf("%s",str1);//Ashish

printf("Enter String 2: ");//input from the user
scanf("%s",str2);//Vaidya

while(str1[lenght] != '\0') //for storing lenght of the str1 for further use
    lenght++;

for(i=0;str2[i]!='\0';++i,++lenght)//'lenght' continues iteration from previoulsy stored value with str2 index 'i'
str1[lenght]=str2[i];//string concatination takes places "str1[6]=str2[0]" 
//                                                         ...                                                        
str1[lenght]='\0';// to exit str1 to avoid garbage values

printf("The concatenated string: ");
printf("%s",str1);//Output: AshishVaidya                          
                                            
}