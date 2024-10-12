#include<stdio.h>

char stack[100];
int top=-1;

void push(char c) ;
void pop();

int main()
{
    char s[100];
    int i=0;
    printf("enter a string ");
    scanf("%s",s);
    while(s[i]!='\0');
    {
        push(s[i]);
        i++;
    }
    pop();
    return 0;
}

void push(char c)
{
    stack[++top] = c ;
}

void pop()
{
   for(int i=top; i>=0;i--)
   {
       printf("%c",stack[i]);
}
}