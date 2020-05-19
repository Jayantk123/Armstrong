#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int n,rem,t,sum=0;

printf("Enter number:\n");
scanf("%d",&n);
t=n;
while(t!=0)
{
rem=t%10;
sum=sum+pow(rem,3);
t=t/10;
}
if(n==sum)
{
printf("Number is Armstrong");
}
else
{
printf("No. is not Armstrong");
}
getch();
}