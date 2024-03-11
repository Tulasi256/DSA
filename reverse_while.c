#include<stdio.h>
int  reverse(int n)
{
    int r=0;
    while(n!=0)
    {
        r=r*10+n%10;
       n= n/10;
    }
    return r;
}
int main()
{
    int n,r;
    printf("Enter n");
    scanf("%d",&n);
   r= reverse(n);
   printf("reverse is%d",r);
   return 0;
}
