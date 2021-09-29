#include<stdio.h>
#include<math.h>
int main()
{
	int i,a,num=0; 
	for(i=101;i<=200;i++)
	{
		for(a=2;a<=sqrt(i);a++)
		{
			if(i%a==0)
			{
				num=num+1;
				break;
			}
		}
	if(a>sqrt(i))
	{
	printf("%d\n",i);
}
}
printf("¹²ÓĞËØÊı£»%d",100-num);
}
