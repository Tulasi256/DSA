#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    int* x=&a;
    int** y=&x;
    int*** z=&y;
    printf("%d\n",z);
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",&a);
    printf("%d\n",*x);
    printf("%d\n",x);
    printf("%p\n",x);
    printf("%p\n",y);
    printf("%p\n",*y);
    printf("%d\n",y);

    return 0;

}