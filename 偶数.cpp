#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int b,n,m,t=0,a=0; 
    scanf("%d",&n);
    if(n<0)
    {
    	printf("数据输入错误！\n");
    	exit(0);
	}
	while(n!=0)
	{
		m=n%10;
		if(m%2==0)
		{
		t=t*10+m;
     	} 
     	n=n/10;
    } 
     while(t!=0)
     {
			b=t%10;
			a=a*10+b;
			t=t/10;
		} 
	printf("偶数组成的数为；%d\n",a);
	return 0;
}
