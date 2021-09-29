#include<stdio.h>
#include<math.h>
int prime(int);
int panduan(int);
int main()
{
	int a;
	while(~scanf("%d",&a)){
		do
		{
			do{
				puanduan(a);
			}while(prime(i)==1)
			printf("%d",i);
			do{
				puanduan(x/c);
			}while(prime(i)==1)
			printf("%d",i);
			
		}while(prime(i)==1&&prime(x/c)==1)
		
	}
}
int prime(int x)
{
	int k;
	k=sqrt(x);
	for(int c=1;c<=k;c++)
	{
		if(x%c==0)
		{
			return 0;
		}
		else if(c>k)
		{
			return 1;
		}
	}
}
int puanduan(int y)
{
	for(int i=2;i<=a;i++)
		{
			if(y%i==0)
			{
				return i;
			}
		}
}
