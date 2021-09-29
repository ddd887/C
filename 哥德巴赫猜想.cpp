#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,p,q,n,p_flag,q_flag;
	while(~scanf("%d",&n)){
		p=1;
		do
		{
			p=p+1;
			q=n-p;
			p_flag=1;
			for(i=2;i<=sqrt(p);i++)
			{
				if(p%i==0)
				{
				p_flag=0;
				break;
			}
			}
			q_flag=1;
			for(i=2;i<=sqrt(q);i++)
			{
				if(q%i==0)
				{
					q_flag=0;
					break;
				}
			}
		}while(p_flag*q_flag==0);
			printf("%d+%d\n",p,q);
	}
	return 0;
}
