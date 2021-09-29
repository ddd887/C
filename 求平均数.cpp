#include<stdio.h>
int main()
{
	int T,k,n;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		int b,c=0;
		float sum=0.0;
		scanf("%d%d",&k,&n);
		for(int a=1;a<=k;a++)
		{
			scanf("%d",&b);
			if(b>n)
			{
				c=c+1;
				sum=sum+b;
			}

		}
		    if(sum==0.0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%.2f\n",sum/c);
			}
	}
	return 0;
}
