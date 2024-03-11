#include<stdio.h>
void calculator(int x,int y,int *add,int *sub,int *mul,int *div)
{
    *add=x+y;
    *sub=x-y;
    *mul=x*y;
    *div=x/y;
}
int main()
{
    int x,y,add,sub,mul,div;
     printf("enter the values of x and y");
     scanf("%d%d",&x,&y);
     calculator(x,y,&add,&sub,&mul,&div);
     printf("\nadd=%d,\nsub=%d,\nmul=%d,\ndiv=%d",add,sub,mul,div);
     return 0;
}