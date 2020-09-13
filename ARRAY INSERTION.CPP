#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,loc,n,p;
 clrscr();
 printf("enter the size of array =");
 scanf("%d",&n);
 printf("the array is =");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("enter the element to inserted =\n");
 scanf("%d",&p);
 printf("enter the location where element is inserted =\n");
 scanf("%d",&loc);
 for(i=n;i>=loc;i--)
 {
   a[i+1]=a[i];
 }
   a[loc]=p;
   n++;
  printf("array after insertion is =");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  getch();
}
