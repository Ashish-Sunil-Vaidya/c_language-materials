#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

float area(triangle* tr, int n,int i)
{

	float p,S;
	
	p=(float)(tr[i].a+tr[i].b+tr[i].c)/2.0;
    
	S=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));

	return S;

}



void sort_by_area(triangle* tr, int n) {
    
	int i;
  
   triangle temp;
  
	for(i=0;i<n;++i) 
    {
    for(int j=1+i;j<n;++j)
         {
         if(area(tr,n,j)>area(tr,n,i))
         {
          temp=tr[j];
         tr[j]=tr[i];
         tr[i]=temp;
         }
         }
    }
	
	
	
}

int main()
{
	int n;
	printf("Enter no. of boxes: ");
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}