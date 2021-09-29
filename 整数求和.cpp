#include<stdio.h>
int main()
{
	int T,a,sum=0;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("%d\n",sum);
}
