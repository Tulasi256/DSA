#include<stdio.h>
int  reverse(int n)
{
    int d_rev=0,rem;
    while(n!=0)
    {
        rem=n%10;
        d_rev=d_rev*10+rem;
        n=n/10;

    }
    return d_rev;

}
    int main()
    {
        int n,d_rev;
        printf("Enter n");
        scanf("%d",&n);
        d_rev=reverse(n);
        printf("%d\t",d_rev);
        if(n==d_rev)
        printf("Given no is palindrome");
        else
        printf("Not palindrome");
        return 0;

    }
