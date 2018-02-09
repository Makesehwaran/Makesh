#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,n;
scanf("%d",&n);
while(n>0)
{
remainder=n%10;
s=s+remainder*remainder*remainder;
n=n/10;
}
if(w==s)
{
printf("amstrong number");
}
else
{
printf("not amstrong number");
}
getch();
}
