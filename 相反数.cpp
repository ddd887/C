#include<stdio.h>
int main()
{
	int T,a[500];
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		int j,k,b,c=0;
		for(b=0;b<T;b++)
		{
			scanf("%d",&a[b]);
		}
		for(j=0;j<T;j++)
		for(i=0;i<T;i++)
		{
			if(a[j]==-a[i])
			{
				c++;
			}
		}
		printf("%d\n",c/2);
	}
	return 0;
}
