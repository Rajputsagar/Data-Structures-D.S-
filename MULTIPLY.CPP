#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k,m,n,x;
 clrscr();
  printf("enter the size of row of first matrix =");
  scanf("%d",&m);
  printf("enter the size of column of first matrix =");
  scanf("%d",&n);
  printf("enter the size of column of second matrix =");
  scanf("%d",&x);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("enter the value of first matrix =");
      scanf("%d",&a[i][j]);
    }
  }
      for(i=0;i<n;i++)
      {
	for(j=0;j<x;j++)
	{
	   printf("enter the value of second matrix =");
	   scanf("%d",&b[i][j]);
	}
      }
      for(i=0;i<m;i++)
      {
	for(j=0;j<x;j++)
	{
	   c[i][j]=0;
	  for(k=0;k<n;k++)
	  {
	     c[i][j]=c[i][j]+a[i][k]*b[k][j];

	  }
	}
      }
	 for(i=0;i<m;i++)
	 {
	    for(j=0;j<x;j++)
	    {
	      printf(" %d",c[i][j]);
	    }
	     printf("\n");
	 }
 getch();
}


