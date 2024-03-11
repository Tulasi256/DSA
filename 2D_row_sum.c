#include<stdio.h>

void read(int a[10][10],int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
         for(int j=0;j<columns;j++)
         {
           //  printf("enter array elements");
            scanf("%d\n", &a[i][j]);
         }
    }
}
void display(int a[10][10],int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
         for(int j=0;j<columns;j++)
         {
            printf("%d\t", a[i][j]);
         }
         printf("\n");
    }
}
  int calsum(int a[10][10],int rows,int columns)
  { int sum=0;
     for(int i=0;i<rows;i++)
    {
         for(int j=0;j<columns;j++)
         { 
            sum=sum+a[i][j];
         }
  }
  return sum;
  }
  void row_sum(int a[10][10],int rows ,int columns)
  {
   //int sum=0;
   for(int i=0;i<rows;i++)
    {   
        int sum=0;
         for(int j=0;j<columns;j++)
         { 
            sum=sum+a[i][j];
    }
    printf("The sum of row %d is=%d\n",i+1,sum);
    }

  }
int main()
{
    int a[10][10];
    int rows,columns,sum;
    printf("enter rows and columns");
    scanf("%d%d",&rows,&columns);
    read(a,rows,columns);
    display(a,rows,columns);
    sum=calsum(a,rows,columns);
    printf("%d\n",sum);
    row_sum(a,rows,columns);
   // printf("%d",sum);
      return 0;

}