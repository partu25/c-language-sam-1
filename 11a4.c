#include<stdio.h>
void main(){
	int i,n,x,y,ans;
	printf("enter the valuo of x :");
	scanf("%d",&x);
	printf("enter the valuo of y :");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
	printf("ans is %d\n",ans);
}
