#include<stdio.h>
int main()
{
	int a;
	float x,y;
	while(~scanf("%d%f%f",&a,&x,&y)){
		float c;
		c=x+a%3*(int)(x+y)%2/4;
			printf("%f\n",c);
	}
	return 0;
}
