#include<stdio.h>
#include<math.h>
unsigned  int xx(int);
int prme(int);
int main()
{
	int T;
	scanf("%d",&T);
	for(int c=1;c<=T;c++)
{
	int a;
	scanf("%d",&a);
	if(prme(a)==0)
	{
		printf("0\n");
	}
		if(prme(xx(a))==0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
	return 0;

}
unsigned int xx(int y)
{
	int z=0;
	while(y!=0)
	{
		z=z*10+y%10;
		y=y/10;
	}
	return z;
}
int prme(int b)
{
	int i,k;
	k=sqrt(b);
	for(i=2;i<=k;i++)
	{
		if(b%i==0)
		{
			return 0;
		}
		else if(i>k)
		{
			return 1;
		}
	}
}
