#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,b,pos;
 clrscr();
 printf("enter the size =");
 scanf("%d",&b);
 for(i=0;i<b;i++)
 {
   printf("enter the elements =");
   scanf("%d",&a[i]);
 }
   printf("enter the pos of deleted no =");
   scanf("%d",&pos);
   for(i=pos-1;i<b-1;i++)
   {
     a[i]=a[i+1];
   }
    b--;
     for(i=0;i<b;i++)
     {
       printf("%d",a[i]);
     }
getch();
}