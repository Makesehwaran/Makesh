#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter the number(intervals):");
scanf("%d%d",&a,&b);
printf("the numbers between %d and %d are:",a,b);
if(a%2==0)
{
printf("odd numbers");
}
else
{
printf("not");
}
getch();
}
