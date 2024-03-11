#include<stdio.h>
int sum(int n)
{
    int i=1,s=0;
    while(i<=n)
{
    if(i%2==0)
    s=s+i;
    i++;

}return s;

}
int main()
{ int n,s;
    printf("enter n");
    scanf("%d",&n);
    s=sum(n);
    printf("s=%d",s);
    return 0;

}