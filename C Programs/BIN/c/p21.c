#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter size");
scanf("%d",&n);
for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf("%d ",j);
		printf("\n");
		}
printf("Enter any key to exit....");
getch();
}