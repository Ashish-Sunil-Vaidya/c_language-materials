#include <stdio.h>
#include <string.h>

struct book
{
char book_name[10];
char author[10];
float price;
int pages;
}book;


int main()
{
printf("Enter the book name\n");
fgets(book.book_name,10,stdin);
fflush(stdin);
printf("Enter the name of the author\n");
scanf("%s",&book.author);
printf("Enter the price\n");
scanf("%f",&book.price);
printf("Enter the no of pages\n");
scanf("%d",&book.pages);
printf("\n\nBook Name: ");
puts(book.book_name);
printf("Author: %s\n",book.author);
printf("Price: %.2f\n",book.price);
printf("Pages: %d",book.pages);



}