#include<stdio.h>
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int a,b,c,d;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d)){
		a*=d;c*=b;
		b*=d;
		a+=c;
		int t=gcd(a,b);
		printf("%d/%d\n",a/t,b/t);
	}
	return 0;
}
