#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		char a[1000];
		int c=0,j=0;
		getchar();
		gets(a); 
		c=strlen(a)-1;
		for(;j<=c;j++,c--)
		{
			if(a[c]!=a[j])
			{
				break;
			}
		}
		if(j<=c)
		{
			printf("No\n");
		}
		else
		{
			printf("Yes\n");
		}
	}
	return 0;
}
