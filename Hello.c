
#include<conio.h>
#include<stdio.h>

union a
{
    int a,b;

}obj,obj1;

void main()
{
printf("Enter value of A & B : ");
scanf("%d %d",&obj.a,&obj1.b);

printf("Sum of A & B = %d",obj.a+obj1.b);

getch();




}
