#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter another number:");
	scanf("%d",&b);
	c=(a>b)? a:b;
	printf("The biggest number is=%d",c);
}
