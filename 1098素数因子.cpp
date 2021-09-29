#include<stdio.h>
void foo(int n)
{
	int i;
	for(i = 2; i <= n / 2; i++)
	{
		if(n % i == 0) 
		{
			printf("%d ", i);
			foo(n / i);
			return;
		}
	}
	printf("%d\n",n);
}
int main()
{
	int t;
	while(~scanf("%d",&t))
	{
		foo(t);
	}
	return 0;
}
