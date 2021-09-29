#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,num=0;
    for(i=101;i<=200;i++)
     {
    for(j=2;j<=sqrt(i);j++)
     {
       if (i%j==0)
{    num=num+1;
      break;
}
}
       if (j>sqrt(i)) printf("%4d",i);
}
printf("共有%d个素数\n",99-num);
}
