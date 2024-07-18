#include<stdio.h>
#include<conio.h>
void main(){
int s,total=28,per;
clrscr();
printf("Enter the value of s:");
scanf("%d",&s);

per=s*total/100;

printf("The total salary :%d\n ",per);
printf("The total salary :%d ",per+s);
getch();



}