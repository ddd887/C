#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,s;
	while(~scanf("%lf%lf%lf",&a,&b,&c))
	{
	if(a+b>c&&a+c>b&&c+b>a)
	{
	  p=(a+c+b)/2;
   	s=sqrt(p*(p-a)*(p-b)*(p-c));
   	printf("%.2lf\n",s);
    }
   else
    printf("-1\n");
}
return 0;
}



