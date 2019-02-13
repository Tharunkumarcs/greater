#include<stdio.h>
#incldue<conio.h>
void main()
{
int a,b,c;
printf("\n Enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("\n A is greater");
}
elseif(b>a&&b>c)
{
printf("\n B is greater");
}
else
{
printf("\n c is greater");
}
getch();
}
