//(Q 4.1)Write a c program to find max between three numbers

/*
Ashish Vaidya;
Roll no : 60
Div: F 
*/




#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c;
printf("Enter three numbers a,b and c\n");
scanf("%d%d%d,",&a,&b,&c);
if( a>b && a>c){
    printf("a is greater than b and c\n");
}
else if(b>a && b>c){
    printf("b is greater than a and c\n");
}
if(c>a && c>b){
    printf("c is greater than a and b\n");
}
else if(a==b && b==c){
    printf("a, b, c are equal\n");
}
return 0;
}