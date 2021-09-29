#include<stdio.h>
int main()
{
	int a[998],sum=0;
	int T;
	scanf("%d",&T);
	for(int i=1;i<T;i++)
	{
		for(int b=0;b<T;b++)
		{
			scanf("%d",&a[b]);
			sum=sum+a[b];
		}
		printf("%d\n",sum);
	}
}
