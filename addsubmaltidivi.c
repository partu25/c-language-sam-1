#include<stdio.h>
void main()
{
    int a,b;
    int N;
    printf("enter the value of a&b");
    scanf("%d %d",&a,&b);
    printf("Enter the value1 of N");
    scanf("%d",&N);
    switch(N)
    {
    case  '+':
        printf("sum of %d and %d is :%d",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    
}
