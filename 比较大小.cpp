#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,z;
	scanf("%d%d",&a,&b);
	z=max(a,b);
	printf("���ֵΪ��%d",z);
	return 0;
 } 
 int max(int x,int y)
 {
    int c;
    c=x>y?x:y;
    return c;
 }
