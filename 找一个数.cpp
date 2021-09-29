#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=10000;i++)
	 for(j=1;j<=100;j++)
	   for(k=1;k<=100;k++)
	     {
	     	if(i+100==j*j&&i+168==k*k)
	     	printf("%d",i);
		 }
	
 } 
