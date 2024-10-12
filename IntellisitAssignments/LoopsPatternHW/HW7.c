    // Z  Z  Z  Z  Z  Z
    // Y  Y  Y  Y  Y
    // X  X  X  X
    // W  W  W
    // V  V
    // U 

    #include<stdio.h>

    void main()
    {   
        int i,j;
        char c='Z';

    for(i=0;i<6;++i,--c)
    {
        printf("\n");
        for(j=6;j>i;--j)
        printf(" %c ",c);
    }
    }