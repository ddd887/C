#include<stdio.h>
#include<string.h>
int main()
{
	int i,T,j;
	char a[1000],b[1000];
	scanf("%d",&T);
	getchar();
	for(i=1;i<=T;i++)
	{
		int c=0;
		gets(a);
		j=strlen(a)-1;
		for(;j>=0;j--,c++)
			b[c]=a[j];
			b[c]='\0';
         printf("%s\n",b);
	}
	return 0;
	
}
