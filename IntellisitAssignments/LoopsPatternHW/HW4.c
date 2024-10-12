    // A
    // B B
    // C C C
    // D D D D
    // E E E E E


    #include<stdio.h>
  
    
    void main()
    {
    int i,j;
    char c='A';
  
    for(i=0;i<5;++i,++c)
    {    
        printf("\n");
        for(j=1;j<=i+1;++j)
         printf(" %c ",c);
    }
    }