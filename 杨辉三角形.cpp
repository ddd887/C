#include<stdio.h>
int main()
{
    int a[100][100],i,j,num;
    scanf("%d",&num);
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
            a[i][j]=0;
    }
    for(i=0;i<num;i++)
        a[i][0]=1;
    for(i=1;i<num;i++)
        for(j=1;j<=i;j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

