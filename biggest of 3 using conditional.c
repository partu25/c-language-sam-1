#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the number1:");
	scanf("%d",&a);
	printf("Enter another number2:");
	scanf("%d",&b);
	printf("Enter another number3:");
	scanf("%d",&c);
	d=(a>b)? a:(b>c)?b:(c>a)?c:a;
	printf("The biggest number is=%d",d);
}
