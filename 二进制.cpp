#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		int a;
		scanf("%d",&a);
		int t=1,temp,b=0;
		temp=a;
		while(temp!=0)
		{
			b=temp%2*t+b;
			temp=temp/2;
			t=t*10;
		}
		printf("%d",b);
	}
	return 0;
}
