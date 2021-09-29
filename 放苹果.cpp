#include<stdio.h>
int f(int m,int n)
	{
		if(m<2||n<2)
		{
			return 1;
		}
		if(m<1||n<0)
		{
			return 0;
		}
		return f(m,n-1)+f(m-n,n);
	}
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
		printf("%d\n",f(m,n));
	}
	return 0;
}
	

