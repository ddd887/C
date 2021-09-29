#include<stdio.h>
#include<math.h>
int main()
{
		int a,m,n;
		while(~scanf("%d",&n)){
		m=sqrt(n);
		for(a=2;a<=m;a++)
		{
			if(n%a==0)break;
		}
		if(a>m&&n>1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
 } 
