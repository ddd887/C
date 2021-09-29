#include<stdio.h>
int main()
{
	int a[1001]={0};
	int i=0;
	int x[1001]={0};
	int flag=1;
	while(flag)
	{
		for(i=0;i<1001;i++)
		{
			scanf("%d",&x[i]);
			if(x[i]==-1)
			{
				flag=0;
				break;
			}
			a[x[i]]++;
		}
	}
	for(i=1;i<1001;i++)
	if(a[i]>0)
	printf("%d %d\n",i,a[i]);
	return 0;
}
