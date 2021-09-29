#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000],b[100000];
	while(~scanf("%s%s",&a,&b))
	{
		int i,j,c=0,d=0,e,f,k=0;
		e=strlen(a);
		f=strlen(b);
		for(i=0;i<e;i++)
		{
			for(j=k;j<f;j++)
			{
				if(a[i]==b[j])
				{
					k=j+1;
					c++;
					break;
				}
				else
				{
					d++;
				}
				
			}
		}
		if(c==e)
		{
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
}
