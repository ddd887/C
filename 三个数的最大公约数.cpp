#include<stdio.h>
int gcd(int,int);
int main()
{
	int T;
	scanf("%d\n",&T);
	for(int i=0;i<T;i++)
	{
		int a,b,c,m;
		scanf("%d%d%d",&a,&b,&c);
		m=gcd(gcd(a,b),c);
		printf("%d\n",m);
	}	
}
int gcd(int x,int y)
{
	int r;
	r=x%y;
	while(r!=0)
	{
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
	
