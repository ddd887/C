#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	while(gets(a))
	{
		int c=0,j=0;
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
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
