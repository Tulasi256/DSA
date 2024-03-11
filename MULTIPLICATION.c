#include<stdio.h>
void read(int a[50][50],int m,int n)
{ 
    printf("enter the elements of array\n");
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
     {
        
        scanf("%d",&a[i][j]);
     }

}
void READ(int b[50][50],int r,int o)
{ 
    printf("enter the elements of array\n");
    for(int i=0;i<r;i++)
     for(int j=0;j<o;j++)
     {
        
        scanf("%d",&b[i][j]);
     }

}
/*void display(int a[50][50],int m,int n)
{
    for(int i=0;i<m;i++)
    {
     for(int j=0;j<m;j++)
     {
        printf(" %d",a[i][j]);
        
     }
      printf("\n");

    }
   //  printf("\n");

}*/
void multiplication(int a[50][50],int m,int n,int b[50][50],int c[50][50],int r,int o)
{
   printf("New array is\n");
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<o;j++)
    {
      c[i][j]=0;
      for(int k=0;k<r;k++)
      {
      c[i][j]+=a[i][k]*b[k][j];
    
      }
      printf(" %d",c[i][j]);
    //printf("\n");
    }
    printf("\n");
}
}
int main()
{
   int m,n,a[50][50],b[50][50],c[50][50],r,o;
   printf("enter the limits of m and n\n");
   scanf("%d%d",&m,&n);
   printf("enter the limits of r and o\n");
   scanf("%d%d",&r,&o);
   if(n!=r)
   {
      printf("columns should be equal to rows");
   }
   else if(m>50 || n>50 ||r>50 ||o>50)
   {
      printf("invalid input");
   }
   else
   {
      read(a,m,n);
      READ(b,r,o);
      //display(a,m,n);
      //display(b,m,n);
      multiplication(a,m,n,b,c,r,o);
      
   }
   return 0;
}