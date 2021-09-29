#include<stdio.h>
int main()
{
	int f(int a,int b);
	int i=2,p;
	
	p=f(i,++i);
	printf("%d\n",p);
	return 0;
	
}

  int f(int a,int b)
{
	int c;
	if(a>b)
	{
		c=1;
	}
	else if(a==b)
	{
		c=-1;
	}
	else
	{
		c=0;
	}
	return c;
}
