#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i%2==0)
{
for(j=0;j<=i;j++)
printf("* ");
for(j=0;j<(n-i)-1;j++)
printf("# ");
}
else
{
for(j=0;j<=i;j++)
printf("# ");
for(j=0;j<(n-i)-1;j++)
printf("* ");
}
printf("\n");
}
getch();
}
