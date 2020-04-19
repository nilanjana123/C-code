#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
void eight_queens(int q[],int r);
void show(int q[]);
void main()
{
int q[9];
eight_queens(q,1);
getch();
}
void eight_queens(int q[],int r)
{
if(r==9)
show(q);
else
{
int i,j,legal;
for(j=1;j<=8;j++)
{
legal=1;
for(i=1;i<=r-1;i++)
{
if(q[i]==j || fabs(q[i]-j)==fabs(r-i))
legal=0;
}
if(legal)
{
q[r]=j;
eight_queens(q,r+1);
}
}
}
}
void show(int q[])
{
int i,j;
printf("\nQueens position---->\n\n");
for(i=1;i<=8;i++)
printf("%d ",q[i]);
printf("\nSolution is ---->\n\n");
for(i=1;i<=8;i++)
{
for(j=1;j<=8;j++)
{
if(q[j]==i)
printf("Q ");
else
printf("- ");
}
printf("\n\n");
}
exit(1);
}

