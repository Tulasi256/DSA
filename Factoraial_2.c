#include<stdio.h>
void factorial(int n)
{
    int i=1,product=1;
    while(i<=n)
    {
    product=product*i;
        i++;
    }
    printf("%d",product);
}
int main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    factorial(n);
    return 0;
}