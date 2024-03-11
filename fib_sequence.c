#include<stdio.h>
void fib_sequence(int n)
{
    int i=-1, j=1, z, cnt=1;//i is first term,j is second term ,z is current term
   
    while(cnt<=n)
    {   z=i+j;
        printf("%4d",z);
        i=j;
        j=z;
        cnt++;
      
    }
}
int main()
{
    int n;
    printf("enetr n");
    scanf("%d",&n);
    fib_sequence(n);
    return 0;

}