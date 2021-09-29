#include <stdio.h>
int main()
{
 	int T;
 	scanf("%d",&T);
 	for(int i=0;i<T;i++)
 	{
int m, n, a, b, t, c;
   scanf("%d%d", &a, &b);
   m=a;   n=b;
   while(b!=0)  
   { c=a%b; a=b;  b=c;}
   printf("%d\n", m*n/a);
	}
	return 0;
}


