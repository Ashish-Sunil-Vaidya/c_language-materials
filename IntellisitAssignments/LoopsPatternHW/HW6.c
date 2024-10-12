    // 5  5  5  5  5
    // 4  4  4  4
    // 3  3  3
    // 2  2
    // 1

    #include<stdio.h>
    
    void main()
    {
    int i,j,cnt=5;

    for(i=0;i<5;++i,--cnt)
    {
        printf("\n");
        for(j=5;j>i;--j)
        printf(" %d ",cnt);
    }

    }