#include<stdio.h>
main()
{
    int p,r,t,i;
    float si;
    i=1;
    while(i<=3)
    {
        scanf("%d%d%d",&p,&r,&t);
        si=(p*t*r)/100;
        printf("SI=%f",si);
    }
}