#include<stdio.h>
int main()
{
	int a1,d,n,sum=0,i;
	scanf("%d%d%d",&a1,&d,&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+a1;
		a1=a1+d;
	}
	printf("%d\n",sum);
}
