#include<stdio.h>
#include <stdlib.h>
void read_array(int a[],int N)
{
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display_array(int a[],int N)
{
    for(int i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
}
int sum_array(int a[],int N)
{
    int sum=0; int i;
    for(i=0;i<N;i++)
    {
        sum =  sum+a[i];

    }
    return sum;
}
int main()
{  // int i;
    int sum,N,avg; int a[100];
    printf("Enter N");
    scanf("%d",&N);
    if(N<0)
    {
        printf("Invalid ");
        exit(0);
    }
    
    if(N>100)
    {
        printf("Invalid");
        exit(0);
    }
   else 
    read_array(a,N);
    display_array(a,N);
    sum=sum_array(a,N);
    printf("Sum =%d\t",sum);
    avg=sum/N;
    printf("Avg=%d\t",avg);
   // return 0;


}