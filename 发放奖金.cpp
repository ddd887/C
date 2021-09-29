#include<stdio.h>
int main()
{
	double i,s;
	scanf("%lf",&i);
	if(i<0)
	{
		printf("输入的值错误！");
	}
	else if(i<=10.0)
	{
		s=i+i/10.0;
		printf("发放奖金总数是；%lf（万元）",s);
	}
	else if(i<=20.0)
	{
		s=i+1+(i-10.0)*0.075;
		printf("发放的奖金总数是:%lf（万元）",s);
	}
	else if(i<=40.0)
	{
		s=i+(i-20.0)/20;
		printf("发放的奖金总数是：%lf（万元）",s);
	}
	else if(i<=60)
	{
		s=i+(i-40)*0.03;
		printf("发放的奖金总数是:%lf（万元）",s);
	}
	else if(i<=100)
	{
		s=i+(i-60)*0.015;
		printf("发放的奖金总数:%lf（万元）",s);
	}
	else if(i>=100)
	{
		s=i+(i-100)*0.01;
		printf("发放的奖金总数是：%lf（万元）",s);
	}
}
