#include<stdio.h>
int main()
{
    int n,d1,d2,d3,d4;
    printf("Enter number");
    scanf("%d",&n);
    d4=n%10;
    d3=n%10;
    d2=n%10;
    d1=n%10;
    int sum=d4+d3+d2+d1;
    printf("sum=%d",sum); 
    return 0;

}