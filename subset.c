#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,m,j,a[50],b[50];
clrscr();
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==b[j])
break;
}
}
if(j==n)
{
printf("a is subset of b");
}
getch();
}
