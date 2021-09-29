#include<stdio.h>
#include<math.h>
float root(float,float,float);
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	root(a,b,c);
	return 0;
 } 
 float root(float a,float b,float c)
 {
 	if(a==0.0)
 	{
 		float x;
 		x=-c/b;
 		printf("%f",x);
	 }
	 else{
	 	if(b*b-4*a*c==0)
	 	{
	 		printf("%f",-(b/(2.0*a))) ;
		 }
		 else if(b*b-4.0*a*c>0)
		 {
		 	float x1,x2;
		 	x1=(-b+sqrt(b*b-4.0*a*c))/2.0*a;
			x2=(-b-sqrt(b*b-4.0*a*c))/2.0*a;
			printf("%f\n",x1);
			printf("%f\n",x2);
		 }
		 else if(b*b-4.0*a*c<0)
		 {
		 	printf("没有实数根");
		  } 
		 
	 }
 }
