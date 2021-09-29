#include<stdio.h>
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n)){
		int a=0,b;
		for(a=0;a<1000;a++)
		{
			b=m-a;
			if(2*a+4*b==n)
			{
				break;
			}
		}
		if(b<0)
		{
			printf("-1 -1\n");
		}
		else
		{
			printf("%d %d\n",a,b);
		}
		
	}
	return 0;
}
