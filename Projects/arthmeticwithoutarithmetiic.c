#include<stdio.h>

int addi(int n1,int n2);
int subs(int n1,int n2);
int multi(int n1,int n2);
int divi(int n1,int n2);
int modu(int n1,int n2); 
  

void main()
{
    int n1,n2;
printf("Enter a number 1: ");
scanf("%d",&n1);

printf("Enter a number 2: ");
scanf("%d",&n2);

printf("\nAddition: %d",addi(n1,n2));
printf("\nSubstraction: %d",subs(n1,n2));
printf("\nMultiplictaion: %d",multi(n1,n2));
printf("\nDivision: %d",divi(n1,n2));
printf("\nModulus: %d",modu(n1,n2));

}

//******************* Addition ********************
int addi(int n1,int n2)
{
    int i;
 for(i=0;i<n2;++i)
 ++n1;

 return n1;
}

//******************* Substraction ********************
int subs(int n1 , int n2)
{
    int i;
for(i=0;i<n2;++i)
 --n1;

 return n1;

}

//******************* Multiplication ********************
int multi(int n1 , int n2)
{
    int i,j,d=0;

for(i=0;i<n2;++i)
{   

    for(j=0;j<n1;++j)
    ++d;
}
return d;
}

//******************* Division ********************
int divi(int n1, int n2)
{
    int i,j,d,cnt=0;
d=n1;
for(i=0;i<n1;++i)
{      
   if(d>=0 && j==n2) ++cnt;
     

     if(n1<n2) {cnt=0; break;}
        
       for(j=0;j<n2;++j)  
         --d;
}

return cnt;
}

//******************* Modulus ********************
int modu(int n1,int n2) //11 3 
{
       int i,j,d;

d=n1;
//dividend-=divisor operation done in decrement from
for(i=0;i<n1;++i) //i<11 not that important as the loop breaks in middle
{
 
for(j=0;j<n2;++j) // 10 9 8   7 6 5   4 3 2 
                  //                      |
 --d;             //                      -> 2 is less than divisor hence print this value 2
 
  if(d<n2) //Checks if the dummy dividend is less than divisor
  {
  if(n1<n2) //if dividend is less than divisor then print the value of dividend itself(idk why, when i was perfoming this type of division it always yielded the dividend itself)
  {         //after printing breaks the outer for loop stopping the loop process
  return n1;
   break;
  }
  else
  {
  return d;//if greater it will printf the value from the above inner loop and breaks the outer loop;
  break;
  }
   } 
 
}
}

//More examples for modulus 10 2
//for loop:  9 8   (++i)   7 6  (++i)  5 4  (++i)  3 2  (++i)  1 0 (d<n2) break
//                                                               |
//                                                               ---> 0 less than divisor prints the value




