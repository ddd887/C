#include<stdio.h>
int sum(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",sum(x,y));
		return 0;
}
	int sum(int a,int b)
	{
		int c;
		c=a+b;
		return c;
	}



