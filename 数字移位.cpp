#include<stdio.h>
int main(){
	int n,k,i,a[101],b;
	while(scanf("%d%d",&n,&k)==2){
		b=n;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			for(i=0;i<k;i++)
			{
				a[b]=a[i];
				b++;
			}
			for(i=k;i<k+n;i++)
			{
				printf("%d ",a[i]);
			}
			
	}
	return 0;
}
