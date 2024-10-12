#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.142

float SquareArea(float l);

float RectangleArea(float a,float b);

float CircleArea(float r);

int main()
{
float l,a,b,r;
printf("Enter lenght of the square: ");
scanf("%f",&l);
printf("%fcm^2\n\n",SquareArea(l));

printf("Enter a=lenght and b=breadth: ");
scanf("%f %f",&a,&b);
printf("%fcm^2\n\n",RectangleArea(a,b));

printf("Enter radius of the circle: ");
scanf("%f",&r);
printf("%fcm^2\n\n",CircleArea(r));
 return 0;
}

float SquareArea(float l)
{   
    return pow(l,2);
}

float RectangleArea(float a,float b)
{
    return a*b;
}

float CircleArea(float r)
{   
    return Pi*r*r;
}






