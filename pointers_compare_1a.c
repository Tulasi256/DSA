#include<stdio.h>
int main()
{
    int a[]={1,2,4,3,5};
    int *p=&a[4];
    int *q=&a[5];
    printf("\n%d",*p<=*q);// if true output=1 if false output =0
    printf("\n%d",*p>=*q);
    q=&a[4];
    printf("\n%d",*p==*q);//if true output =1
    
    return 0;


}
