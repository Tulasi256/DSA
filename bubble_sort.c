#include<stdio.h>
void read(int a[100],int N)
{
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[100],int N)
{
    for(int i=0;i<N;i++)
    {
        printf("\n%d",a[i]);
    }
}
void sort(int a[100],int N)
{   int t;
    for(int i=0;i<=N-1;i++)
    {
      for(int j=0;j<=N-1-i;j++)   
      { 
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
      }
    }
}
int main()
{
    int N,a[100];
    printf("Enter N");
    scanf("%d",&N);
    read(a,N);
    display(a,N);
    sort(a,N);
    display(a,N);
    return 0;
}