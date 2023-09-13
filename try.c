#include <stdio.h>

void main(){
	
	int n,i=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2 != 0){
		printf("%d\v",i);
	}
	i++;
	}
}
