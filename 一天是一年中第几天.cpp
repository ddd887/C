#include<stdio.h>
int main()
{
	int a,b,c,num;
	printf("�����룻��.��.��\n");
	scanf("%d%d%d",&a,&b,&c);
	if(b==1)
	{
		num=c;
		printf("����һ��ĵ�  %d  ��",num);
		return 0;
	}
	if(b==2)
	{
		num=31+c;
		printf("����һ��ĵ� %d ��",num);
		return 0;
	}
		if(a%4==0||a%100!=0&&a%400==0)
		{
			num=num+1;
	    }
	if(b==3)
	{
		num=31+28+c;
		printf("����һ��ĵ� %d ��",num);
	}
	if(b==4)
	{
		num=31+28+31+c;
		printf("����һ��ĵ�  %d  ��",num);
	 }
	 if(b==5)
	 {
	 	num=31+28+31+30+c;
	 	printf("����һ��ĵ�   %d  ��",num);
	  } 
	 if(b==6)
	 {
	 	num=31+28+31+30+31+c;
	 	printf("����һ��ĵ�   %d   ��",num);
	 }
	if(b==7)
	{
		num=31+28+31+30+31+30+c; 
		printf("����һ��ĵ�  %d  ��",num);
	}
	if(b==8)
	{
		num=31+28+31+30+31+30+31+c; 
		printf("����һ��ĵ�  %d  ��",num);
	}
	if(b==9)
	{
		num=31+28+31+30+31+30+31+31+c; 
		printf("����һ��ĵ�   %d  ��",num);
	}
	if(b==10)
	{
		num=31+28+31+30+31+30+31+31+30+c;
		printf("����һ��ĵ�  %d  ��",num);
	}
	if(b==11)
	{
		num=31+28+31+30+31+30+31+31+30+31+c;
		printf("����һ��ĵ�  %d  ��",num); 
	}
	if(b==12)
	{
		num=31+28+31+30+31+30+31+31+30+31+30+c;
		printf("����һ��ĵ�   %d   ��",num);
	}
	 
}
