#include<stdio.h>
int main()
{
	double i,s;
	scanf("%lf",&i);
	if(i<0)
	{
		printf("�����ֵ����");
	}
	else if(i<=10.0)
	{
		s=i+i/10.0;
		printf("���Ž��������ǣ�%lf����Ԫ��",s);
	}
	else if(i<=20.0)
	{
		s=i+1+(i-10.0)*0.075;
		printf("���ŵĽ���������:%lf����Ԫ��",s);
	}
	else if(i<=40.0)
	{
		s=i+(i-20.0)/20;
		printf("���ŵĽ��������ǣ�%lf����Ԫ��",s);
	}
	else if(i<=60)
	{
		s=i+(i-40)*0.03;
		printf("���ŵĽ���������:%lf����Ԫ��",s);
	}
	else if(i<=100)
	{
		s=i+(i-60)*0.015;
		printf("���ŵĽ�������:%lf����Ԫ��",s);
	}
	else if(i>=100)
	{
		s=i+(i-100)*0.01;
		printf("���ŵĽ��������ǣ�%lf����Ԫ��",s);
	}
}
