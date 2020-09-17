#include<stdio.h>
#include<conio.h>
void main()
{
int b,flag=0,i,a[20],n;
clrscr();
printf("enter the size of array =");
scanf("%d",&b);
for(i=0;i<b;i++)
{
 printf("enter the no =");
 scanf("%d",&a[i]);
}
printf("enter the no for searching =");
scanf("%d",&n);
for(i=0;i<b;i++)
{
 if(a[i]==n)
 {
  printf("element is found");

  printf("\nlocation=%d",i);
  flag=1;
 }
}
 if(flag==0)
 {
  printf("element not found");
 }
getch();
}
