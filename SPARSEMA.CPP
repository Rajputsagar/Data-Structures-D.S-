#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],i,j,b,c,m,count=0;
 clrscr();
 printf("enter the size of row =");
 scanf("%d",&b);
 printf("enetr the size of column =");
 scanf("%d",&c);
 m=(b*c)/2;
 for(i=0;i<b;i++)
 {
  for(j=0;j<c;j++)
  {
    printf("enter the elements =");
    scanf("%d",&a[i][j]);
  }
 }
   for(i=0;i<b;i++)
   {
    for(j=0;j<c;j++)
    {
      printf(" %d ",a[i][j]);
    }
    printf("\n");
   }

     for(i=0;i<b;i++)
     {
      for(j=0;j<c;j++)
      {
       if(a[i][j]==0)
	{
	  count=count+1;
	}
       }
      }
     if(count>m)
     {
      printf("sparse matrix");
     }
     else
     {
       printf("this is not sparse matrix");
     }
getch();
}


