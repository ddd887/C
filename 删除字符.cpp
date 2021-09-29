#include<stdio.h>
int main()
{
	char a[1001];
	while(gets(a))
	{
		int i=0,c=0;
		char b;
		scanf("%c",&b);
		getchar();
		for(;a[i];i++)
		{
			if(b==a[i])
			{
				c++;
			}
	
	}
		printf("%d\n",c);
	}
	return 0;
}
