#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
		{
			printf("31\n");
		}
		if(b==4||b==6||b==9||b==11)
		{
			printf("30\n");
		}
		if(b==2)
		{
			if(a%4==0&&a%100!=0||a%400==0)
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
		}
	}
	return 0;
}
